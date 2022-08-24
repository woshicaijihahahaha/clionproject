
#include <iostream>
#include <string>
#include <thread>
#include <list>
#include <mutex>
#include <condition_variable>
#include <iostream>
#include <iostream>
using namespace std;

int main() {
    enum class Color { red, green, blue };
    Color r1 = Color::red;
    Color r = Color::blue;
    switch(r1)
    {
        case Color::red:
            std::cout << "red\n";
            break;
        case Color::green:
            std::cout << "green\n";
            break;
        case Color::blue:
            std::cout << "blue\n";
            break;
    }
    return 0;
}


