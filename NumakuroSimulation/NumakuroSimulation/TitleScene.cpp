#include "TitleScene.h"
#include "DXlib.h"

TitleScene::~TitleScene()
{

}

void TitleScene::Update()
{
}

void TitleScene::Draw()
{
	DrawBox(10, 10, 50, 50, GetColor(60, 60, 60), true);
}