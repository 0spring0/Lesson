#pragma once
class Sprite
{
	//�R���X�g���N�^���B�����Ƃł��̃N���X�̎��Ԃ͎��g�̃N���X���ł����쐬�ł��Ȃ��Ȃ�
private:
	Sprite();
	Sprite(const Sprite&) = delete;
	Sprite& operator= (const Sprite&) = delete;
public:
	//�����Ŏ��Ԃ̍쐬�Ǝ擾���s��
	static Sprite* get() { static Sprite instance; return &instance; }

public:
	~Sprite();

public:
	void draw();
};

