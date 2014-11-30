#include "BattleScene.h"
#include <dxlib.h>
#include "endingscene.h"


BattleScene::BattleScene()
{
	isWon = false;
	input = false;
}

void BattleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_7))
		ChangeScene(std::make_shared<EndingScene>());

	if (CheckHitKey(KEY_INPUT_Z) && !input)
	{
		isWon = gameManager->DoBattle(nullptr);
		input = true;
	}
}

void BattleScene::Draw()
{
	if (!input)
	{
		DrawString(0, 0, "ｚを押すと戦います", GetColor(0, 0, 0));
	}

	if (isWon)
	{
		DrawString(0, 0, "ミズゴローは勝った", GetColor(0, 0, 0));
	}
	else
	{
		DrawString(0, 0, "ミズゴローは負けた", GetColor(0, 0, 0));
	}
}