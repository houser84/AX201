#ifndef ___UI_CONTROLLER_H___
#define ___UI_CONTROLLER_H__

#include "ComponentBase.h"
#include "ObjectBase.h"
#include <memory>
#include <DirectXMath.h>

class Game01Controller : public ComponentBase
{
private:
	bool m_NextScene; // UI�؂�ւ��p�t���O
	int m_nSelect;    // �I��p�J�E���^
public:
	// �R���X�g���N�^
	Game01Controller() {};
	// �f�X�g���N�^
	~Game01Controller() {};

	// ������
	void Start() override;
	// �X�V
	void Update()override;
};

#endif //!___UI_CONTROLLER_H___