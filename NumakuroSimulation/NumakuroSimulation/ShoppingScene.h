#pragma once
#include "iscene.h"

class ShoppingScene
	:public IScene
{
private:
	int GHandle;
	int Color;
	std::vector<Item> a;
public:
	
	ShoppingScene();
	void Init() override;
	void Update() override;
	void Draw() override;
public:
	
	
};
