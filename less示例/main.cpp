#include <iostream>


// less example
#include <iostream>     // std::cout
#include <functional>   // std::less
#include <algorithm>    // std::sort, std::includes

int main () {
    int foo[]={10,20,5,15,25};
    int bar[]={15,10,20};
    std::sort (foo, foo+5, std::less<int>());  // 5 10 15 20 25
    std::sort (bar, bar+3, std::less<int>());  //   10 15 20
    for (auto &k:foo)
    {
        std::cout<<k<<" "<<std::endl;
    }
    if (std::includes (foo, foo+5, bar, bar+3, std::less<int>()))
        std::cout << "foo includes bar.\n";
    return 0;
}
