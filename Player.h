#pragma once
class Player {
private:
	int score;
	int weapon;  //BulletsSpawner(�|�C���^�^�j
public:
	Player();
	~Player();
	void Update()override;
	void Draw()override;
	void Hit()override;
};
