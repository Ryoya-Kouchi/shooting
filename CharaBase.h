#pragma once
class CharaBase {
private:
	float speed;
	int image;
public:
	void Update();
	void Draw();
    int  Hit();  //引数でダメージを受け取る ダメージを受けたときの処理

};
