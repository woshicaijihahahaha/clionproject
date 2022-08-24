#include <iostream>
using namespace std;
int function1(int x, int n) {
    int result = 1;  // 注意 任何数的0次方等于1
    for (int i = 0; i < n; i++) {
        result = result * x;
    }
    return result;
}
int function2(int x, int n) {
    if (n == 0) {
        return 1; // return 1 同样是因为0次方是等于1的
    }
    return function2(x, n - 1) * x;
}
int function3(int x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 1) {
        return function3(x, n / 2) * function3(x, n / 2)*x;
    }
    return function3(x, n / 2) * function3(x, n / 2);
}
int function4(int x, int n) {
    if (n == 0) {
        return 1;
    }
    int t = function4(x, n / 2);// 这里相对于function3，是把这个递归操作抽取出来
    if (n % 2 == 1) {
        return t * t * x;
    }
    return t * t;
}
int fibonacci(int i) {
    if(i <= 0) return 0;
    if(i == 1) return 1;
    return fibonacci(i-1) + fibonacci(i-2);
}
int main() {
    int a=2;
    int b=20;
    int result=function4(a,b);
   cout<<result<<endl;
//    cout<<3/2<<endl;
//    cout<<0%2<<endl;
//    std::cout << "Hello, World!" << std::endl;
    int c=fibonacci(10);
    cout<<c<<endl;
    return 0;
}
