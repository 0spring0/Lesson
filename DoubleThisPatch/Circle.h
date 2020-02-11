#pragma once
#include "Shape.h"

class Circle :
	public Shape
{
public:
	Circle();
	~Circle();

public:
	bool collision(Shape* Target);
	bool collision(Circle* Target);
	bool collision(Box* Target);
};

