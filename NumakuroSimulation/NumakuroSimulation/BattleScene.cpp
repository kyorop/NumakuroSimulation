#include "BattleScene.h"
#include <dxlib.h>
#include "endingscene.h"

void BattleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_7))
		ChangeScene(std::make_shared<EndingScene>());
}

void BattleScene::Draw()
{
}