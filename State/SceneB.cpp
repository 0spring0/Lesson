#include "SceneB.h"
#include <iostream>

//遷移先のシーン
#include "SceneA.h"


SceneB::SceneB()
{
}


SceneB::~SceneB()
{
}

bool SceneB::init()
{
	num_ = 0;
	return true;
}

SceneBase * SceneB::update()
{
	std::cin >> num_;

	if (num_ == 0)
		return nullptr;
	else if (num_ == 1)
		return new SceneA;

	return this;
}

void SceneB::draw()
{
	std::cout << "現在のシーンはBです。" << std::endl;
}
