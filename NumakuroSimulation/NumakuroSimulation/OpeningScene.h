#pragma once
#include "iscene.h"

class OpeningScene
	:public IScene
{
private:
	int x = 0;//文字送り用
	char *op[2];
	int GHandle;
public:
	OpeningScene();
	~OpeningScene() override;
	void Update() override;
	void Draw() override;
};
