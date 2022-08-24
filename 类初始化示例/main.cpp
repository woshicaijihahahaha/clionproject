#include <iostream>

#include<iostream>
#include<algorithm>

using namespace std;

class Teacher
{
public:
    Teacher();
    Teacher( string name,int age);
    void set_strName( string name );
    string get_strName();
    void set_iAge( int age );
    int get_iAge();
private:
    string m_strName;
    int m_iAge;
};
#include<iostream>
#include<string>

using namespace std;

Teacher::Teacher()
{
    m_strName = "hello";
    m_iAge = 5;
    cout << "Teacher() output" << endl;
}

Teacher::Teacher(string name,int age ):m_strName(name),m_iAge(age){
    cout << "Teacher( string name,int age ) output" << endl;
}


void Teacher::set_strName(string name){
    m_strName = name;
}

string Teacher::get_strName(){
    return m_strName;
}

void Teacher::set_iAge(int age){
    m_iAge = age;
}

int Teacher::get_iAge(){
    return m_iAge;
}

int main()
{
    Teacher t1;
    Teacher t2("xiaoming",10);

    cout << t1.get_strName() << " " << t2.get_iAge() << " " << endl;
    cout << t2.get_strName() << " " << t2.get_iAge() << " " << endl;

    return 0;
}