#pragma once
class GameMain
{
private:

	int player;
	int life;
	int enemy[3];
	int bullets[2];
public:

	GameMain();
	~GameMain();
	void Update() override;
	void Draw() override;

	void SpawnBullet();


};