#include "IventSelectScene.h"
#include "DxLib.h"

IventSelectScene::IventSelectScene()
{
	GHandle = LoadGraph("../../沼ゲー素材/ゲーム画面.png");
}

void IventSelectScene::Update()
{
}

void IventSelectScene::Draw()
{
	DrawGraph(0, 0,GHandle , true);
}