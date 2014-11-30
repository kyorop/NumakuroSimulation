#include "IventSelectScene.h"
#include "DxLib.h"
#include "TitleScene.h"

IventSelectScene::IventSelectScene()
{
	GHandle = LoadGraph("numakuro/ゲーム画面.png");
}

void IventSelectScene::Update()
{
	if (CheckHitKey(KEY_INPUT_SPACE))
		ChangeScene(std::shared_ptr<TitleScene>());
}

void IventSelectScene::Draw()
{
	DrawGraph(0, 0,GHandle , true);
}