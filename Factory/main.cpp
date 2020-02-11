#include "Factory.h"
#include <vector>
#include <memory>

// ���̃p�^�[���͐����Ǘ�����̃N���X�ōs�����ƂŐ����������Ǘ����₷������p�^�[���ł��B
// ��ɓG�̐�����A�C�e���A�t�B�[���h���̐����ȂǓ����悤�ȏ��Q���Ǘ�����Ƃ��ɐ�������܂��B

int main()
{
	std::vector<Base*> list;

	list.push_back(Factory::get()->create(ID::kItem));
	list.push_back(Factory::get()->create(ID::kCoin));

	for (auto& itr : list)
		itr->draw();

	// create�֐���new�ŃI�u�W�F�N�g���m�ۂ��Ă���̂ŊJ��������Y��Ȃ��悤��
	for (auto itr = list.begin(); itr != list.end();)
	{
		delete (*itr);
		itr = list.erase(itr);
	}

	// �e���v���[�g�o�[�W������unique_ptr��p����ver���L�ڂ��Ă���
	std::vector<std::unique_ptr<Base>> unique_list;

	// ����Base���p�����ĂȂ��N���X�œ������Ƃ����悤�Ƃ���ƃR���p�C���G���[�ɂȂ�
	unique_list.push_back(std::unique_ptr<Base>(Factory::get()->create<Item>()));
	unique_list.push_back(std::unique_ptr<Base>(Factory::get()->create<Coin>()));

	for (auto& itr : unique_list)
		itr->draw();
}