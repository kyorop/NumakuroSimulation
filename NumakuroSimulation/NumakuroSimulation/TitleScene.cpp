#include "TitleScene.h"
#include "DXlib.h"

TitleScene::TitleScene()
{
	GHandle = LoadGraph("../../沼ゲー素材/タイトル.png");
}

TitleScene::~TitleScene()
{
}

void TitleScene::Update()
{
}

void TitleScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);

}