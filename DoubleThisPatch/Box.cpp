#include "Box.h"
#include <iostream>


Box::Box()
{
}


Box::~Box()
{
}

bool Box::collision(Shape * Target)
{
	return Target->collision(this);
}

bool Box::collision(Circle * Target)
{
	std::cout << "���Ɖ~�̔���" << std::endl;
	return true;
}

bool Box::collision(Box * Target)
{
	std::cout << "���Ɣ��̔���" << std::endl;
	return true;
}
