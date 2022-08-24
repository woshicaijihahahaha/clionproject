#include <bits/stdc++.h>
using namespace std;

#include <map>
#include<vector>

//查找和统计
void test01()
{
    map<int, int>m;
    m.insert(pair<int, int>(1, 10));
    m.insert(pair<int, int>(2, 20));
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(4, 30));
cout<<m[3]<<endl;
cout<<"-------------------------"<<endl;
map<int,vector<int>>n;
n[1].push_back(30);
    n[0].push_back(10);
    cout<<n[0][0]<<endl;
    //查找
    cout<<"-------------------------"<<endl;
    map<int, int>::iterator pos = m.find(1);//返回的是迭代器

    if (pos != m.end())
    {
        cout << "找到了元素 key = " << (*pos).first << " value = " << (*pos).second << endl;

    }
    else
    {
        cout << "dont fin  key = " << (*pos).first << " value = " << (*pos).second << endl;
        cout << "未找到元素" << endl;
    }
    cout<<"end "<<m.end()->first<<"  "<<m.end()->second<<endl;
    cout<<"beigin  "<<m.begin()->first<<"  "<<m.begin()->second<<endl;
    //统计
    int num = m.count(30);
    cout << "num = " << num << endl;
}
void test02()
{
    vector<int>p(4,5);
    cout<<p.size()<<endl;
    for (int i=0;i<p.size();i++)
    {
        cout<<p[i]<<endl;
    }
}
int main() {

    test01();
//test02();
   // system("pause");

    return 0;
}

