#include "Circle.h"
#include <iostream>


Circle::Circle()
{
}


Circle::~Circle()
{
}

bool Circle::collision(Shape * Target)
{
	return Target->collision(this);
}

bool Circle::collision(Circle * Target)
{
	std::cout << "‰~‚Æ‰~‚Ì”»’è" << std::endl;
	return true;
}

bool Circle::collision(Box * Target)
{
	std::cout << "‰~‚Æ” ‚Ì”»’è" << std::endl;
	return true;
}
