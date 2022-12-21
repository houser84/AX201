#ifndef ___ENEMYMANAGER_H___
#define ___ENEMYMANAGER_H___
#include"ComponentBase.h"

#include<vector>
#include<DirectXMath.h>
class EnemyManager : public ComponentBase
{
public:
	//�R���X�g���N�^
	EnemyManager();
	//�f�X�g���N�^
	~EnemyManager()
	{}

	//�X�V
	void Update() override;

	//�G�̍ő吔
	constexpr static int mc_EnemyMaxNum = 10;
private:
	//���|�b�v����Ԋu
	float m_RepopTime;
	//�t���[���J�E���g
	float m_tick;
	std::vector<DirectX::XMFLOAT3> m_RepopPosList;
};


#endif // !___ENEMYMANAGER_H___