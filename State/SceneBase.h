#pragma once

// �e�V�[���͂��̃N���X���p�������č��
class SceneBase
{
public:
	SceneBase();
	virtual ~SceneBase();

public:
	virtual bool init() = 0;

	// �e�V�[���Ő؂�ւ����s�������ꍇ�͎��̃V�[���̃|�C���^��
	// �I���������ꍇ��nullptr��Ԃ��悤��
	// ���݂̃V�[���𑱂������ꍇ��this��ԋp����
	virtual SceneBase* update() = 0;

	virtual void draw() = 0;

protected:
	int num_;
};

