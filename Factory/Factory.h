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
	// ID利用
	Base* create(ID Id);
	// テンプレート利用
	//	注意：引数ありコンストラクタが利用できないので利用時は注意が必要
	template<class T>
	inline Base* create()
	{
		return new T;
	}
};

