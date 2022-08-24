#include <iostream>
#include<vector>
using namespace std;
void show(vector<double> a[])
{
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main() {
    vector<double>arr[10];
    for (int i=0;i<10;i++)
    {
        for (int j=0;j<5;j++)
        {
            arr[i].push_back(j);
        }
    }
//    for (int i=0;i<10;i++)
//    {
//        for (int j=0;j<5;j++)
//        {
//            cout<<arr[i][j]<<" ";
//        }
//        cout<<endl;
//    }
show(arr);
    cout<<"a= "<<arr[9][4]<<endl;
  //  cout<<arr->size()<<endl;

    return 0;
}
