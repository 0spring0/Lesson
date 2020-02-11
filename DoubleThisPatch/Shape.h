#pragma once

class Circle;
class Box;

class Shape
{
public:
	Shape() = default;
	virtual ~Shape() = default;

public:
	virtual bool collision(Shape* Targte) = 0;
	virtual bool collision(Circle* Targte) { return true; };
	virtual bool collision(Box* Targte) { return true; };
};
