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
	std::cout << num_ << "更新処理" << std::endl;
}

void Object::draw()
{
	std::cout << num_ << "描画処理" << std::endl;
}

void Object::func()
{
	std::cout << num_ << "関数処理" << std::endl;
}
