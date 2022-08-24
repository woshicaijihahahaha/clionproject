#include <iostream>
#include <memory>
#include<vector>
using namespace std;
//class Test
//{
//public:
//    Test(string name)
//    {
//        name_ = name;
//        cout << this->name_ << "  constructor" << endl;
//    }
//    ~Test()
//    {
//        cout << this->name_ << "  destructor" << endl;
//    }
//
//    string name_;
//};
class Person
{
public:
    Person(string name , int age)
    {
        this->name_=name;
        this->age_=age;

    }
    string getName() const {return name_;}
    string setName(const string name) {name_=name;}
    int  getAge() const {return age_;}
    int setAge(const int age) {age_=age;}

    ~Person()
    {
        //cout << this->name_ << "  destructor" << endl;
    }
private:
    vector<shared_ptr<Person>>persons_;
    string name_;
    int age_;
};
class Boss
{
public:
    void printPerson(vector<shared_ptr<Person>> &persons_);
    vector<shared_ptr<Person>>persons_;

};
void Boss::printPerson(vector<shared_ptr<Person>> &persons_)
{
    for (auto &per_ptr:persons_)
    {
        cout<<per_ptr->getName()<<per_ptr->getAge()<<endl;
    }
//    persons_[0]->setName("jerry");
//    persons_[0]->setAge(18);
   // cout<<persons_[0]->getName()<<persons_[0]->getAge()<<endl;
}
int main() {
//    Person p("Tom",18);
//    cout<<"name: "<<p.getName()<<" age: "<<p.getAge()<<endl;
    vector<shared_ptr<Person>>P_ptr;
    shared_ptr<Person>p1(new Person("Tom",18));
//    P_ptr.emplace_back(p1);
//    Boss b;
//    b.printPerson(P_ptr);
p1->setName("zhangsan");
p1->setAge(90);
P_ptr.emplace_back(p1);
    shared_ptr<Person>p2(new Person("jerry",20));
    P_ptr.emplace_back(p2);
    for (auto &per_ptr:P_ptr)
    {
        cout<<per_ptr->getName()<<" "<<per_ptr->getAge()<<endl;
    }
//    /* 类对象 原生指针构造 */
//    shared_ptr<Test> pStr1(new Test("object"));
//    cout << (*pStr1).name_ << endl;
//    /* use_count()检查引用计数 */
//    cout << "pStr1 引用计数：" << pStr1.use_count() << endl;
//
//    shared_ptr<Test> pStr2 = pStr1;
//    cout << (*pStr2).name_ << endl;
//    cout << "pStr1 引用计数：" << pStr1.use_count() << endl;
//    cout << "pStr2 引用计数：" << pStr2.use_count() << endl;
//
//    /* 先new 一个对象，把原始指针传递给shared_ptr的构造函数 */
//    int *pInt1 = new int(11);
//    shared_ptr<int> pInt2(pInt1);
//
//    /* unique()来检查某个shared_ptr 是否是原始指针唯一拥有者 */
//    cout << pInt2.unique() << endl; //true 1
//    /* 用一个shared_ptr对象来初始化另一个shared_ptr实例 */
//    shared_ptr<int> pInt3(pInt2);
//    cout << pInt2.unique() << endl; //false 0
//
//    cout << pInt3.use_count() << endl;
//    cout << pInt2.use_count() << endl;

    return 0;
}
