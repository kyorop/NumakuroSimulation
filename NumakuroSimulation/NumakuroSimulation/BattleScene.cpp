#include "BattleScene.h"
#include <dxlib.h>
#include "endingscene.h"
#include "iventselectscene.h"

BattleScene::BattleScene()
{
	isBattled = false;
	isWon = false;
	input = false;
	handle = LoadGraph("numakuro/バトル.png");
}

void BattleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_7))
		ChangeScene(std::make_shared<EndingScene>());

	if (CheckHitKey(KEY_INPUT_Z) && !input)
	{
		isWon = gameManager->DoBattle(nullptr);
		input = true;
		isBattled = true;
	}

	if (CheckHitKey(KEY_INPUT_RETURN) && isBattled)
		ChangeScene(std::make_shared<IventSelectScene>());
}

void BattleScene::Draw()
{
	int color = GetColor(0, 0, 0);

	DrawGraph(0, 0, handle, true);

	if (!input)
	{
		DrawString(50, 450, "ｚを押すと戦います", color);
	}

	if (input)
	{
		if (isWon)
		{
			DrawString(50, 450, "ミズゴローは勝った", color);
		}
		else
		{
			DrawString(50, 450, "ミズゴローは負けた", color);
		}
	}

	if (isBattled)
		DrawString(50, 480, "エンターキーを押すと戻ります。", color);

}