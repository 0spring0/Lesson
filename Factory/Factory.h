#pragma once
#include "Item.h"
#include "Coin.h"

#include <memory>

enum class ID
{
	kItem,
	kCoin
};

class Factory
{
private:
	Factory();
	Factory(const Factory&) = delete;
	Factory& operator= (const Factory&) = delete;
public:
	static Factory* get() { static Factory instance; return &instance; }

public:
	~Factory();

public:
	// ID���p
	Base* create(ID Id);
	// �e���v���[�g���p
	//	���ӁF��������R���X�g���N�^�����p�ł��Ȃ��̂ŗ��p���͒��ӂ��K�v
	template<class T>
	inline Base* create()
	{
		return new T;
	}
};

