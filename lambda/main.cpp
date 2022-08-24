#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void test01()
{
    vector<int> data;
    for (int i = 0; i < 10; ++i)
        data.push_back(i);
    sort(data.begin(), data.end());
    for (int i = 0; i < data.size(); ++i)
        cout << data[i] << endl;
}
bool cmp(int &a, int &b);
void test02(){
    vector<int> data;
    for (int i = 0; i < 10; ++i)
        data.push_back(i);
    sort(data.begin(), data.end(), cmp);
    for (int i = 0; i < data.size(); ++i)
        cout << data[i] << endl;
}
void test03()
{
    vector<int> data;
    for (int i = 0; i < 10; ++i)
        data.push_back(i);
    sort(data.begin(), data.end(), [](int &a, int &b) {
        return a > b;
    });
    for (int i = 0; i < data.size(); ++i)
        cout << data[i] << endl;
}
void test04()
{
    vector<int> data;
    vector<int> result;
    for (int i = 0; i < 10; ++i)
        data.push_back(i);
    for_each(data.begin(), data.end(), [&result](int &elem){
        if (elem % 2 == 0)
            result.push_back(elem);
    });
    for_each(result.begin(), result.end(), [](int &a){
        cout << a << endl;
    });
}
void test05()
{
    std::vector<int> some_list;
    int total = 0;
    for (int i = 0; i < 5; ++i) some_list.push_back(i);
    std::for_each(begin(some_list), end(some_list), [&total](int x)
    {
        total += x;

    });
    cout<<total<<" ";
}
int main() {
   // test01();
    //test02();
   // test03();
//    int a = 0;
//    auto f = ([a]()->void {cout << a << endl;});
//    f();
//test04();
test05();
    return 0;
}
bool cmp(int &a, int &b) {
    return a > b;
}
