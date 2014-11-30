#include "EndingScene.h"
#include <DxLib.h>

EndingScene::EndingScene()
{
	GHandle1 = LoadGraph("numakuro/ED1.png");
	GHandle2 = LoadGraph("numakuro/ED2.png");
}

void EndingScene::Update()
{
}

void EndingScene::Draw()
{
	DrawGraph(0, 0, GHandle1, true); //育成が終わりました的な画面
	//途中で下の画面に遷移
	DrawGraph(0, 0, GHandle2, true); //最終パラメータを表示
}