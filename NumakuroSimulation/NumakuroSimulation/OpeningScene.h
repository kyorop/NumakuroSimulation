#pragma once
#include "iscene.h"

class OpeningScene
	:public IScene
{
private:
	int GHandle;
public:
	OpeningScene();
	~OpeningScene() override;
	void Update() override;
	void Draw() override;
};
