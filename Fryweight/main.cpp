#include "Fryweight.h"

// ��Ƀ��\�[�X�̎g���܂킵�ŗp������p�^�[���ł��B
// ����I�u�W�F�N�g���g���܂킵�ă������̎g�p��ߖ񂵂����Ƃ��ɐ�������܂��B

// �g���܂킵�Ɋւ��Ă̓f�o�b�N���s�Ŋm�F
int main()
{
	auto fry = Fryweight::get();

	// �V�K�ǂݍ���
	std::string word1 = fry->getName("Hellow");
	std::string word2 = fry->getName("Good");
	// 2�x�ڂ̓ǂݍ���
	std::string word3 = fry->getName("Hellow");

	//���ݎg���Ă��镪���J��
	fry->release("Hellow");
	fry->release("Hellow");

	// �����̐V�K�ǂݍ���
	word1 = fry->getName("Hellow");
}