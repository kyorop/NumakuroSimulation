#pragma once
#include "iscene.h"

class OpeningScene
	:public IScene
{
public:
	~OpeningScene() override;
	void Update() override;
	void Draw() override;
};
