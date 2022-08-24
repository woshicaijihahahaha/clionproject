//
// Created by yy on 22-6-9.
//

#ifndef SOLDIER_GUN_H
#define SOLDIER_GUN_H
#include <string>
using namespace std;
class Gun
{
public:
Gun(string type)
{
    this->type_=type;
}
void addBullet(int num);
bool shoot();



private:
    std::string type_;
    int bullet_count_;


};













#endif //SOLDIER_GUN_H
