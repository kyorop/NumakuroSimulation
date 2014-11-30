#include "StudyScene.h"
#include <dxlib.h>
#include "battlescene.h"

void StudyScene::Update()
{
	if (CheckHitKey(KEY_INPUT_6))
		ChangeScene(std::make_shared<BattleScene>());
}

void StudyScene::Draw()
{
}