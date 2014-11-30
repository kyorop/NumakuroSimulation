#pragma once
#include "iscene.h"
#include <memory>

class IventSelectScene
	:public IScene
{
private:
	int GHandle;
public:
	IventSelectScene();
	void Update() override;
	void Draw() override;
	
};
