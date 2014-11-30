#include "TitleScene.h"
#include "DXlib.h"

TitleScene::TitleScene()
{
	GHandle = LoadGraph("numakuro/タイトル.png");
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