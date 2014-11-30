#include "ShoppingScene.h"
#include <dxlib.h>
#include "feedingscene.h"

ShoppingScene::ShoppingScene()
{
	GHandle = LoadGraph("numakuro/ショッピング.png");
	Color = GetColor(255, 255, 255);
}

void ShoppingScene::Init()
{
	a  = IScene::gameManager->GetPurchasableItems();

}

void ShoppingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_3))
		ChangeScene(std::make_shared<FeedingScene>());
}

void ShoppingScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);
	size_t n= a.size();
	for (size_t i = 0; i < n; i++)
	{
		std::string name = a.at(i).GetItemName();
		int len = name.length();
		char *fname = new char[len + 1];
		memcpy(fname, name.c_str(), len + 1);
		
		for (size_t i = 0; i < n; i++){
			 DrawFormatString(50, 50 + 10*i, Color, fname);
		}
	}
}