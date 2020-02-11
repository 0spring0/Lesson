#include "TaskClass.h"
#include "TaskFunction.h"
#include "Object.h"

#include <functional>

// ����̓f�U�C���p�^�[���ł͂Ȃ��ł����A�\���Ƃ��Ċ��Ǝg������̗ǂ����̂ɂȂ�܂��B
// ���p�@�͂��낢�날��܂����A��Ɋ֐��̎��s���Ǘ����邽�߂ɗp�����܂��B
// �܂��A�����ł͊֐��̎��s���Ǘ����Ă��܂����A�����ɂ���Ă͊֐��̎��s���̊Ǘ����ł���������܂��B

// �^�X�N�V�X�e�����̑����̂��������邽�߂����ł�2��ޏЉ�܂��B
// �ׂ��ȓ���Ɋւ��Ă̓f�o�b�N���s�Ŋm�F���Ă��������B
int main()
{
	Object obj1(1);
	Object obj2(2);

	// �N���X�P�ʂ̃^�X�N�V�X�e��
	TaskClass::get()->regist(&obj1);
	TaskClass::get()->regist(&obj2);

	TaskClass::get()->update();
	TaskClass::get()->draw();

	// �^�X�N����̍폜
	TaskClass::get()->unregist(&obj1);
	TaskClass::get()->unregist(&obj2);
	TaskClass::get()->update();
	TaskClass::get()->draw();

	// �֐��P�ʂ̃^�X�N�V�X�e��
	TaskFunction::get()->regist(std::bind(&Object::func,&obj1));
	TaskFunction::get()->regist(std::bind(&Object::update, &obj1));
	TaskFunction::get()->regist(std::bind(&Object::func, &obj2));

	TaskFunction::get()->run();

	// �^�X�N����̍폜
	// ����̊֐��̂ݏ����������ł��Ȃ����ߖ����[�v�ŌĂт����֐���o�^�A�����I�����ɑS�폜�Ƃ������g�����ɂȂ肻���ł��B
	// ��������̊֐��̂ݏ������@���������ꍇ�͋����Ă��������B
	TaskFunction::get()->clear();
	TaskFunction::get()->run();
}