#include "OpeningScene.h"
#include <dxlib.h>
#include "iventselectscene.h"

OpeningScene::~OpeningScene()
{
}

void OpeningScene::Update()
{
	if (CheckHitKey(KEY_INPUT_1))
		ChangeScene(std::make_shared<IventSelectScene>());
}

void OpeningScene::Draw()
{
}