#pragma once
#include "iscene.h"

class BattleScene
	:public IScene
{
public:
	BattleScene();
private:
	int isWon;
public:
	int input;
	void Update() override;
	void Draw() override;
public:
	
};
