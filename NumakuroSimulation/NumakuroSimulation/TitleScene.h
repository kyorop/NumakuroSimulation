#pragma once
#include "iscene.h"

class TitleScene:
	public IScene
{
private:
	int GHandle;
public:
	TitleScene();
	~TitleScene() override;

	void Update() override;
	void Draw() override;
};
