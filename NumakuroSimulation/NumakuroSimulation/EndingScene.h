#pragma once
#include "iscene.h"

class EndingScene
	:public IScene

{
	int GHandle1;
	int GHandle2;
public:
	void Update() override;
	void Draw() override;
public:
	EndingScene();
	
};
