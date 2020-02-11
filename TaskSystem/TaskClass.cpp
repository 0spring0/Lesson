#include "TaskClass.h"



TaskClass::TaskClass()
{
}


TaskClass::~TaskClass()
{
}

void TaskClass::regist(Base * ObjectPtr)
{
	object_list_.push_back(ObjectPtr);
}

void TaskClass::unregist(Base * ObjectPtr)
{
	for (auto itr = object_list_.begin(), end = object_list_.end(); itr != end; ++itr)
	{
		if ((*itr) == ObjectPtr)
		{
			object_list_.erase(itr);
			break;
		}
	}
}

void TaskClass::update()
{
	for (auto& itr : object_list_)
		itr->update();
}

void TaskClass::draw()
{
	for (auto& itr : object_list_)
		itr->draw();
}
