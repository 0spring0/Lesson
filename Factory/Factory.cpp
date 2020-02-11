#include "Factory.h"

Factory::Factory()
{
}


Factory::~Factory()
{
}

Base * Factory::create(ID Id)
{
	switch (Id)
	{
	case ID::kItem:
		return new Item;
	case ID::kCoin:
		return new Coin;
	default:
		break;
	}
	return nullptr;
}
