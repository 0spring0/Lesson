// �ŏ��̃V�[��
#include "SceneA.h"
#include <memory>

// ��ɃV�[���J�ڂŗp������p�^�[���ł��B
// �V�K�V�[���̒ǉ���J�ڐ�̕ύX�����₷���p�^�[���ł��B

//�V�[���J�ڂɊւ��Ă�"State"�̂ق���"�֐��|�C���^"��p�������̂�"switch��"��p�������̂�����̂Œm���Ă����đ��͂Ȃ��Ǝv���܂��B

// �R���\�[�����͂�0�ŏI��1�Ŏ��̃V�[���ւ��̑��ňړ��Ȃ�

int main()
{
	// �l�I�ɂ����̓����unique_ptr���g���čs���Ă���B
	// ���p���Ȃ�ver�ɂ��Ēm�肽���l�͌l�I�ɕ׋����邩�����Ă��������B
	// ���ɂ��Ă͊e�V�[����SceneBase���Q��

	std::unique_ptr<SceneBase> scene;

	scene = std::make_unique<SceneA>();

	if (scene->init() == false)
		return 0;

	while (true)
	{
		SceneBase* temp = scene->update();

		//�����ŃV�[���̐؂�ւ����s���Ă���
		if (temp == nullptr)
			break;
		else if (temp != scene.get())
		{
			if (temp->init() == false)
				break;

			scene.reset(temp);
		}

		scene->draw();
	}
}