//
// Created by yy on 22-6-9.
//

#ifndef SOLDIER_SOLDIER_H
#define SOLDIER_SOLDIER_H
#include<string>
#include"Gun.h"
class Soldier
{
public:
    Soldier(std::string name)
    {
        this->name_=name;
        this->gun_ptr_=NULL;

    }
    void addBulletToGun(int num);
    void addGun(Gun *gun_ptr);
    bool fire();




private:
    std::string name_;
    Gun *gun_ptr_;


};






#endif //SOLDIER_SOLDIER_H
