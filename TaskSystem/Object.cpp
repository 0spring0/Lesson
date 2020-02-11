#include "Object.h"
#include <iostream>


Object::Object(int Num)
{
	num_ = Num;
}


Object::~Object()
{
}

void Object::update()
{
	std::cout << num_ << "XVˆ—" << std::endl;
}

void Object::draw()
{
	std::cout << num_ << "•`‰æˆ—" << std::endl;
}

void Object::func()
{
	std::cout << num_ << "ŠÖ”ˆ—" << std::endl;
}
