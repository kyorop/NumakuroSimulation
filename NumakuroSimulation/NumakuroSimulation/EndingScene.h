#pragma once
#include "iscene.h"

class EndingScene
	:public IScene
{
private:
	int x = 0;//文字送り用
	int GHandle1,GHandle2;
public:
	void Update() override;
	void Draw() override;
public:
	EndingScene();
private:
	char *ed[3];
};
