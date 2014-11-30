#include "IventSelectScene.h"
#include "DxLib.h"
#include "shoppingscene.h"

IventSelectScene::IventSelectScene()
{
	GHandle = LoadGraph("numakuro/ゲーム画面.png");
}


void IventSelectScene::Update()
{
	if (CheckHitKey(KEY_INPUT_2))
		ChangeScene(std::make_shared<ShoppingScene>());
}

void IventSelectScene::Draw()
{
	DrawGraph(0, 0,GHandle , true);
}


