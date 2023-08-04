#pragma once
class Enemy 
{
private:
	int hp;
	int point; //スコア加算量
	int weapon;//BulletsSpawnerの子クラス
public:
	Enemy();
	~Enemy();
	void Update()override;
	void Draw()override;
	void Hit()override;
};
