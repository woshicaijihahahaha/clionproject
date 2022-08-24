#include <iostream>
#include<memory>
using namespace std;
void test01()
{
    shared_ptr<int>p1(new int());
    cout<<p1.use_count()<<endl;//1
    p1.reset();
    cout<<p1.use_count()<<endl;//0
    p1.reset(new int(30));//在内部指向新指针，因此其引用计数将再次变为1。
    cout<<p1.use_count()<<endl;//1
    // std::shared_ptr<int> p2 = new int();错误 带有参数的 shared_ptr 构造函数是 explicit 类型的
    std::shared_ptr<int> p2 = std::make_shared<int>();//创建新的shared_ptr对象的最佳方法是使用std :: make_shared：
}
void test02()
{
    // 使用 make_shared 创建空对象
    std::shared_ptr<int> p1 = std::make_shared<int>();
    *p1 = 78;
    std::cout << "p1 = " << *p1 << std::endl; // 输出78

    // 打印引用个数：1
    std::cout << "p1 Reference count = " << p1.use_count() << std::endl;

    // 第2个 shared_ptr 对象指向同一个指针
    std::shared_ptr<int> p2(p1);

    // 下面两个输出都是：2
    std::cout << "p2 Reference count = " << p2.use_count() << std::endl;
    std::cout << "p1 Reference count = " << p1.use_count() << std::endl;

    // 比较智能指针，p1 等于 p2
    if (p1 == p2) {
        std::cout << "p1 and p2 are pointing to same pointer\n";
    }

    std::cout<<"Reset p1 "<<std::endl;

    // 无参数调用reset，无关联指针，引用个数为0
    p1.reset();
    std::cout << "p1 Reference Count = " << p1.use_count() << std::endl;

    // 带参数调用reset，引用个数为1
    p1.reset(new int(11));
    std::cout << "p1  Reference Count = " << p1.use_count() << std::endl;

    // 把对象重置为NULL，引用计数为0
    p1 = nullptr;
    std::cout << "p1  Reference Count = " << p1.use_count() << std::endl;
    if (!p1) {
        std::cout << "p1 is NULL" << std::endl; // 输出
    }

}
void test03()
{
    // 需要添加自定义删除器的使用方式
//    std::shared_ptr<string> p3(new string[12]);   // 仅用于演示自定义删除器
//*p3={'w','s'};
//    std::cout << "p3 = " << *p3 << std::endl; // 输出78  错误
// 指向数组的智能指针可以使用这种形式
    std::shared_ptr<int[]> p4(new int[12]);  // 正确使用方式

   // std::cout << "p4 = " << *p4 << std::endl; // 输出78
}

    struct Sample
    {
        Sample() {
            std::cout << "Sample\n";
        }
        ~Sample() {
            std::cout << "~Sample\n";
        }
    };
void deleter(Sample * x)
{
    std::cout << "Custom Deleter\n";
    delete[] x;
}
class Deleter
{
public:
    void operator() (Sample * x) {
        std::cout<<"DELETER FUNCTION CALLED\n";
        delete[] x;
    }
};
void test04()
{
    int *num = new int(23);
    std::shared_ptr<int> p1(num);

    std::shared_ptr<int> p2(p1);  // 正确使用方法
   // std::shared_ptr<int> p3(num); // 不推荐

    std::cout << "p1 Reference = " << p1.use_count() << std::endl; // 输出 2
    std::cout << "p2 Reference = " << p2.use_count() << std::endl; // 输出 2
  //  std::cout << "p3 Reference = " << p3.use_count() << std::endl; // 输出 1

}

int main() {
    std::cout << "Hello, World!" << std::endl;
    //test01();
   // test02();
//    std::shared_ptr<Sample> p3(new Sample[3], deleter);
    cout<<"--------------------------"<<endl;
// 函数对象作为删除器
    std::shared_ptr<Sample> p4(new Sample[3], Deleter());
    cout<<"--------------------------"<<endl;
// Lambda表达式作为删除器
//    std::shared_ptr<Sample> p5(new Sample[10], [](Sample * x){
//        std::cout<<"DELETER FUNCTION CALLED\n";
//        delete[] x;
//    });
test04();

    return 0;
}
