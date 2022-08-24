//
// Created by yy on 22-6-9.
//
#include "Soldier.h"
void Soldier::addGun(Gun *gun_ptr)
{
    this->gun_ptr_=gun_ptr;
}
void Soldier::addBulletToGun(int num)
{
    this->gun_ptr_->addBullet(num);
}
bool Soldier::fire()
{
    this->gun_ptr_->shoot();
}
