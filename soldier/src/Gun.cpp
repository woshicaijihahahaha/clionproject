//
// Created by yy on 22-6-9.
//
#include "Gun.h"
#include<iostream>
void Gun::addBullet(int num)
{
    this->bullet_count_+=num;


}
bool Gun::shoot()
{
    if (this->bullet_count_<=0)
    {
        std::cout<<"there is no bullet"<<std::endl;
        return false;
    }
    std::cout<<"have bullets in here"<<endl;
    return true;
}

