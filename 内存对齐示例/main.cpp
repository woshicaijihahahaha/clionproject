#include <iostream>
using namespace std;
#include<cstring>
void test01()
{
    class Data
    {
        char c;
        double a;
    };//1+8=9

    cout << sizeof(Data) << endl;
}
void test02()
{
    class Data
    {
        char c;
        int a;
    };//1+4=5

    cout << sizeof(Data) << endl;
}
void test03()
{
    class Data
    {
        char c;
        int a;
        char d;
    };

    cout << sizeof(Data) << endl;
}
void test04()
{
    class Data
    {
        char c;
        char d;
        int a;
    };

    cout << sizeof(Data) << endl;
}
void test05()
{
    class BigData
    {
        char array[33];
    };

    class Data
    {
        BigData bd;//36
        int integer;//4
        double d;//8
    };

    cout << sizeof(BigData) << "   " << sizeof(Data) << endl;
}
void test06()
{
    class BigData
    {
        char array[33];
    };

    class Data
    {
        BigData bd;
        double d;
    };

    cout << sizeof(BigData) << "   " << sizeof(Data) << endl;
}
class People
{
public:
    int age;
   People(int a)  {    age=a;  }
};
void foo (  )
{
    People p1(10);  //方式一
    People* p_p2=new People(10); //方式二
    People p3=10; //方式三
    cout<<p3.age<<endl;

}
int main() {
/*  test01();
  test02();
  test03();
    test04();
    test05();
    test06();*/

foo();


     // 这样也是OK的, 至少编译是没问题的, 但是如果析构函数里用free释放_pstr内存指针的时候可能会报错, 完整的代码必须重载运算符"=", 并在其中处理内存释放
}
