#pragma once
class Base
{
public:
	Base() = default;
	virtual ~Base() = default;

public:
	virtual void draw() = 0;
};