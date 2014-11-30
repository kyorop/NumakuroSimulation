#pragma once
#include "iscene.h"
#include <DxLib.h>

class GameOverScene
	:public IScene
{
private:
	int GHandle = LoadGraph("numakuro/ゲームオーバー.png");
	char *gameover[3];
public:
	void Update() override;
	void Draw() override;
public:
	GameOverScene();
};
