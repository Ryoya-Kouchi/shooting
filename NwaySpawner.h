#pragma once
class NwaySpawner
{
private:
	int numBullets; //���˂���e�̐�
	int baseAngle; //���˂���ŏ��̒e�̌���
	int angleDiff; //�e���m�̊p�x��
public:
	int Shoot() override;
};