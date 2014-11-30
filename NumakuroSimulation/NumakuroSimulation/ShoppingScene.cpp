#include "ShoppingScene.h"
#include <dxlib.h>
#include "feedingscene.h"

void ShoppingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_3))
		ChangeScene(std::make_shared<FeedingScene>());
}

void ShoppingScene::Draw()
{
}