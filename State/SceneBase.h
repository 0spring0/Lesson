#pragma once

// 各シーンはこのクラスを継承させて作る
class SceneBase
{
public:
	SceneBase();
	virtual ~SceneBase();

public:
	virtual bool init() = 0;

	// 各シーンで切り替えを行いたい場合は次のシーンのポインタを
	// 終了したい場合はnullptrを返すように
	// 現在のシーンを続けたい場合はthisを返却する
	virtual SceneBase* update() = 0;

	virtual void draw() = 0;

protected:
	int num_;
};

