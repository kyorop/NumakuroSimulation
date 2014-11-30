#include "TitleScene.h"
#include "DXlib.h"
#include "openingscene.h"

TitleScene::TitleScene()
{
	GHandle = LoadGraph("numakuro/タイトル.png");
}

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
	DrawGraph(0, 0, GHandle, true);

}