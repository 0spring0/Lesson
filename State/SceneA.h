#pragma once
#include "SceneBase.h"
class SceneA :
	public SceneBase
{
public:
	SceneA();
	~SceneA();

public:
	bool init();
	SceneBase* update();
	void draw();
};

