#include "Fryweight.h"



Fryweight::Fryweight()
{
}


Fryweight::~Fryweight()
{
}

const std::string & Fryweight::getName(const std::string & FileName)
{
	//読み込まれている場合は使いまわす。
	auto find = dictionary_.find(FileName);
	if (find != dictionary_.end())
	{
		++find->second.second;
		return find->second.first;
	}

	//新規読み込みの場合は新しく作成する
	std::string save_data = FileName + "Dictionary";
	dictionary_.insert(std::make_pair(FileName, std::make_pair(save_data, 1)));

	return dictionary_.at(FileName).first;
}

void Fryweight::release(const std::string & FileName)
{
	auto find = dictionary_.find(FileName);

	if (find != dictionary_.end())
	{
		//参照数がなくなったら開放
		if (--find->second.second <= 0)
		{
			dictionary_.erase(FileName);
		}
	}
}
