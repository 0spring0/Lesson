#pragma once
class Sprite
{
	//コンストラクタを隠すことでこのクラスの実態は自身のクラス内でしか作成できなくなる
private:
	Sprite();
	Sprite(const Sprite&) = delete;
	Sprite& operator= (const Sprite&) = delete;
public:
	//ここで実態の作成と取得を行う
	static Sprite* get() { static Sprite instance; return &instance; }

public:
	~Sprite();

public:
	void draw();
};

