#include <iostream>
using namespace std;
class Person
{
public:
    Person(string name,int age):name_(name),age_(age) {};
    int getage(){return age_;}
    string& getname(){return name_;}
    void setage( int &age) {age_=age;}
   void setname( const string &name) {name_=name;}

    string name_;
    int age_;

};
void test01()
{
    Person p("zhangsan",18);
    cout<<p.getage()<<endl;
    cout<<p.getname()<<endl;
    int a=20;
    p.setage(a);
    p.setname("lisi");
    cout<<p.getage()<<endl;
    cout<<p.getname()<<endl;


}
void add(const int &a)
{
   cout<<a<<endl;
}
void test02()
{
    size_t a=10;
    int b=12;
    add(a);
}
int main() {
    //std::cout << "Hello, World!" << std::endl;
   test01();
    //test02();
    return 0;
}
