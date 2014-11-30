#pragma once
#include "iscene.h"

class OpeningScene
	:public IScene
{
private:
<<<<<<< HEAD
	char *op[2];
=======
	int GHandle;
>>>>>>> bdf59488aa5de19308a359b761f13bbdbc89cd63
public:
	OpeningScene();
	~OpeningScene() override;
	void Update() override;
	void Draw() override;
};
