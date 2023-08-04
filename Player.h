#pragma once
class Player {
private:
	int score;
	int weapon;  //BulletsSpawner(ポインタ型）
public:
	Player();
	~Player();
	void Update()override;
	void Draw()override;
	void Hit()override;
};
