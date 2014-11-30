#include "OpeningScene.h"
#include <dxlib.h>
#include "iventselectscene.h"

OpeningScene::~OpeningScene()
{
}

void OpeningScene::Update()
{
	if (CheckHitKey(KEY_INPUT_SPACE))
		ChangeScene(std::make_shared<IventSelectScene>(this));
}

void OpeningScene::Draw()
{
}