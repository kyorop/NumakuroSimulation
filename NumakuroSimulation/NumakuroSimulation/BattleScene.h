#pragma once
#include "iscene.h"

class BattleScene
	:public IScene
{
public:
	BattleScene();
private:
	int isWon;
	bool isBattled;
public:
	int handle;
	int input;
	void Update() override;
	void Draw() override;
public:
	
};
