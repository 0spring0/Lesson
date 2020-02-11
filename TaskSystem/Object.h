#pragma once
#include "Base.h"
class Object :
	public Base
{
public:
	Object(int Num);
	~Object();

public:
	void update();
	void draw();
	void func();

private:
	int num_;
};

