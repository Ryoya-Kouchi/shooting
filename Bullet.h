#pragma once
class Bullet
{
private:
#pragma once
	int damage;
	float speed;
	int angle;
	float acceleration;  //���x�̕ω���
	int angulVelocity;  //�p�x�̕ω���
public:

	int Shoot() overrride;

};