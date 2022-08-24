#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
void test_arr() {
    int array[2][3] = {
            {0, 1, 2},
            {3, 4, 5}
    };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
}
class Solution {
public:
    int search(vector<int>& nums, int target) {
        auto it=find(nums.begin(),nums.end(),target);
        if (it==nums.end())
        {
            //cout << "没有找到!" << endl;
            return -1;

        }
        else{

            int n=-1;
            for (auto it1=nums.begin();it1!=nums.end();it1++){
                n++;
                if (*it1==target){
                   // cout<<n<<endl;
                    cout << "找到: "<<"n= "<<n << endl;
                    return n;
                    break;
                }
            }

        }


    }
};
int main() {
    //test_arr();
    vector<int>a;
    a.push_back(4);
    a.push_back(6);
    a.push_back(1);
    a.push_back(3);
    a.push_back(5);
    a.push_back(10);
    Solution pp;
    pp.search(a,10);
    return 0;
}

