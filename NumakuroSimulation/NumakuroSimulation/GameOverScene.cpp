#include "GameOverScene.h"
#include "iventselectscene.h"

class IventSelectScene;

GameOverScene::GameOverScene()
{
	gameover[0] = "ミズゴロウは死んでしまいました。";
	gameover[1] = "次はきちんとヌマクローに進化させてあげてくださいね";
	gameover[2] = "GAME OVER";
}

void GameOverScene::Update()
{
	if (CheckHitKey(KEY_INPUT_5))
		ChangeScene(std::make_shared<IventSelectScene>());
}

void GameOverScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);
}