#pragma once
class NwaySpawner
{
private:
	int numBullets; //”­Ë‚·‚é’e‚Ì”
	int baseAngle; //”­Ë‚·‚éÅ‰‚Ì’e‚ÌŒü‚«
	int angleDiff; //’e“¯m‚ÌŠp“x·
public:
	int Shoot() override;
};