#include "EndingScene.h"
#include <dxlib.h>
#include "gameoverscene.h"

void EndingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_8))
		ChangeScene(std::make_shared<GameOverScene>());
}

void EndingScene::Draw()
{
}