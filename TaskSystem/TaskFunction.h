#pragma once
#include <list>
#include <functional>

class TaskFunction
{
private:
	TaskFunction();
	TaskFunction(const TaskFunction&) = delete;
	TaskFunction& operator= (const TaskFunction&) = delete;
public:
	static TaskFunction* get() { static TaskFunction instance; return &instance; }
public:
	~TaskFunction();

public:
	void regist(const std::function<void(void)>& Function);
	void clear();

public:
	void run();

private:
	std::list<std::function<void(void)>> function_list_;
};

