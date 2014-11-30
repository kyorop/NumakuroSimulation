#include "ShoppingScene.h"
#include <dxlib.h>
#include "feedingscene.h"

ShoppingScene::ShoppingScene()
{
	GHandle = LoadGraph("numakuro/ショッピング.png");
}

void ShoppingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_3))
		ChangeScene(std::make_shared<FeedingScene>());
}

void ShoppingScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);
}