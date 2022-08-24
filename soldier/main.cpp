#include <iostream>
#include"Gun.h"
#include"Soldier.h"
void test()
{
    Soldier sanduo("许三多");
    sanduo.addGun(new Gun("AK47"));
    sanduo.addBulletToGun(20);
    sanduo.fire();


}

int main() {
    //std::cout << "Hello, World!" << std::endl;
    test();
    return 0;
}
