#include "SceneA.h"
#include <iostream>

//�J�ڐ�̃V�[��
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
	std::cout << "���݂̃V�[����A�ł��B" << std::endl;
}
