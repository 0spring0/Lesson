#include "TaskFunction.h"



TaskFunction::TaskFunction()
{
}


TaskFunction::~TaskFunction()
{
}

void TaskFunction::regist(const std::function<void(void)>& Function)
{
	function_list_.push_back(Function);
}

void TaskFunction::clear()
{
	function_list_.clear();
}

void TaskFunction::run()
{
	for (auto& itr : function_list_)
		itr();
}
