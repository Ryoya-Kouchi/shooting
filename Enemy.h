#pragma once
class Enemy 
{
private:
	int hp;
	int point; //�X�R�A���Z��
	int weapon;//BulletsSpawner�̎q�N���X
public:
	Enemy();
	~Enemy();
	void Update()override;
	void Draw()override;
	void Hit()override;
};
