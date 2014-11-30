#pragma once
#include "iscene.h"

class EndingScene
	:public IScene
{
public:
	void Update() override;
	void Draw() override;
public:
	int GHandle1;
	int GHandle2;
	EndingScene();
	
};
