#include "Sprite.h"

	// Singleton�͎��̂�1�������݂ł��Ȃ����Ƃ��ۏ؂��ꂽ�p�^�[���ł��B
	// static�ŃN���X���쐬�����ꍇ�Ɠ����̎g�������ł��܂��B

	// ���Ɋւ��Ă�Sprite.h���Q��

int main()
{

	//���ۂɗ��p����Ƃ��͎��̂�������Ă��珈���֐����Ăяo���B
	Sprite::get()->draw();
}