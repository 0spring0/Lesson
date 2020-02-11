#pragma once
#include "Shape.h"
class Box :
	public Shape
{
public:
	Box();
	~Box();

public:
	bool collision(Shape* Target);
	bool collision(Circle* Target);
	bool collision(Box* Target);
};

