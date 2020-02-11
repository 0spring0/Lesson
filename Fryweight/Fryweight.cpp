#include "Fryweight.h"



Fryweight::Fryweight()
{
}


Fryweight::~Fryweight()
{
}

const std::string & Fryweight::getName(const std::string & FileName)
{
	//�ǂݍ��܂�Ă���ꍇ�͎g���܂킷�B
	auto find = dictionary_.find(FileName);
	if (find != dictionary_.end())
	{
		++find->second.second;
		return find->second.first;
	}

	//�V�K�ǂݍ��݂̏ꍇ�͐V�����쐬����
	std::string save_data = FileName + "Dictionary";
	dictionary_.insert(std::make_pair(FileName, std::make_pair(save_data, 1)));

	return dictionary_.at(FileName).first;
}

void Fryweight::release(const std::string & FileName)
{
	auto find = dictionary_.find(FileName);

	if (find != dictionary_.end())
	{
		//�Q�Ɛ����Ȃ��Ȃ�����J��
		if (--find->second.second <= 0)
		{
			dictionary_.erase(FileName);
		}
	}
}
