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
	std::cout << num_ << "�X�V����" << std::endl;
}

void Object::draw()
{
	std::cout << num_ << "�`�揈��" << std::endl;
}

void Object::func()
{
	std::cout << num_ << "�֐�����" << std::endl;
}
