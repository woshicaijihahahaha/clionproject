#include <iostream>    // std::cout
#include <chrono>      // std::chrono::seconds, std::chrono::milliseconds
// std::chrono::duration_cast
int main ()
{
    using namespace std::chrono;
    // std::chrono::milliseconds is an instatiation of std::chrono::duration:
    milliseconds foo (1000); // 1 second，1000微秒
    foo*=60;
    std::cout << "duration (in periods): ";
    std::cout << foo.count() << " milliseconds.\n";
    std::cout << "duration (in seconds): ";
    std::cout << foo.count() * milliseconds::period::num / milliseconds::period::den;
//den表示分母，num表示分子，ratio的单位是秒
//所以milliseconds::period::num=1000,milliseconds::period::den = 1;
    //所以num/den表示千分之一
//同理hours::period::num = 1;hours::period::den = 3600;最好用作比例
    std::cout << " seconds.\n";
    return 0;
}
