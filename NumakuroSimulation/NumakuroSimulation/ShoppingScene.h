#pragma once
#include "iscene.h"

class ShoppingScene
	:public IScene
{
private:
	int GHandle;
public:
	ShoppingScene();
	void Update() override;
	void Draw() override;
public:
	
};
