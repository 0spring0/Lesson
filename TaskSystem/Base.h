#pragma once
class Base
{
public:
	Base() = default;
	virtual ~Base() = default;

public:
	virtual void update() = 0;
	virtual void draw() = 0;
};
