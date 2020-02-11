#include "SceneA.h"
#include <iostream>

//遷移先のシーン
#include "SceneB.h"


SceneA::SceneA()
{
}


SceneA::~SceneA()
{
}

bool SceneA::init()
{
	num_ = 0;

	return true;
}

SceneBase * SceneA::update()
{
	std::cin >> num_;

	if (num_ == 0)
		return nullptr;
	else if (num_ == 1)
		return new SceneB;

	return this;
}

void SceneA::draw()
{
	std::cout << "現在のシーンはAです。" << std::endl;
}
