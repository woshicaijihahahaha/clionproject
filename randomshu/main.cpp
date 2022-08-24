#include <iostream>

#include <iostream>
#include <ctime>
#include <random>

int main() {

    std::default_random_engine e;
    std::uniform_real_distribution<double> u(1.5,2); // 左闭右闭区间
   // e.seed(time(0));

    for (int i=0; i<10; i++) {
        std::cout << u(e) << std::endl;
    }

    return 0;
}