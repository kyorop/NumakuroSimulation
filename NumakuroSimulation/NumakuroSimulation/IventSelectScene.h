#pragma once
#include "iscene.h"
#include <memory>

class IventSelectScene
	:public IScene
{
public:
	IventSelectScene();
	void Update() override;
	void Draw() override;
	
};
