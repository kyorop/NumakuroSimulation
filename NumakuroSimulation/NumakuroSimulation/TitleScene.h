#pragma once
#include "iscene.h"

class TitleScene:
	public IScene
{
public:
	~TitleScene() override;

	void Update() override;
	void Draw() override;
};
