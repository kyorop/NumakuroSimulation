#include "TitleScene.h"
#include "DXlib.h"
#include "openingscene.h"

TitleScene::~TitleScene()
{

}

void TitleScene::Update()
{
	if (CheckHitKey(KEY_INPUT_0))
		ChangeScene(std::make_shared<OpeningScene>());
}

void TitleScene::Draw()
{
	
}