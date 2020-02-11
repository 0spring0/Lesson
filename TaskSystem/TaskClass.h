#pragma once
#include <list>
#include "Base.h"

class TaskClass
{
private:
	TaskClass();
	TaskClass(const TaskClass&) = delete;
	TaskClass& operator= (const TaskClass&) = delete;
public:
	static TaskClass* get() { static TaskClass instance; return &instance; }
public:
	~TaskClass();

public:
	void regist(Base* ObjectPtr);
	void unregist(Base* ObjectPtr);

public:
	void update();
	void draw();

private:
	std::list<Base*> object_list_;
};

