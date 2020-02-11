#include "Circle.h"
#include "Box.h"

#include <vector>

// ���̃f�U�C���p�^�[���̓N���X���̂���剻���₷���p�^�[���Ŋg���������܂�Ȃ��p�^�[���ɂȂ�܂��B
// �Ȃ̂ŗ��p���͂�����x�Ή�������}��( ����͌`�� )���m���܂��͏��������ꍇ�ɐ�������܂��B

int main()
{
	std::vector<Shape*> object_list_;

	object_list_.push_back(new Circle);
	object_list_.push_back(new Box);

	// �S�Փ˔���
	for (auto& owner : object_list_)
	{
		for (auto& target : object_list_)
		{
			// ���̒i�K���X�g�̒��g�͂��ׂ�Shape*�^�Ȃ̂ŉ��̌`��Ȃ̂��킩��Ȃ�
			// �֐��ł̓����ɂ��Ă̓f�o�b�N���s�łǂ̂悤�ȓ���Ō`�󔻒������Ă���̂��m�F���Ă�������
			owner->collision(target);
		}
	}

	// �J������
	for (auto itr = object_list_.begin(); itr != object_list_.end(); ++itr)
		delete (*itr);
}