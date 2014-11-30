#pragma once
#include "iscene.h"

class OpeningScene
	:public IScene
{
private:
	char *op[2];
public:
	OpeningScene();
	~OpeningScene() override;
	void Update() override;
	void Draw() override;
};
