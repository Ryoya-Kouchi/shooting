#pragma once
class Bullet
{
private:
#pragma once
	int damage;
	float speed;
	int angle;
	float acceleration;  //速度の変化量
	int angulVelocity;  //角度の変化量
public:

	int Shoot() overrride;

};