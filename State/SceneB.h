#pragma once
#include "SceneBase.h"
class SceneB :
	public SceneBase
{
public:
	SceneB();
	~SceneB();

public:
	bool init();
	SceneBase* update();
	void draw();
};

