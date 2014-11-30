#include "EndingScene.h"
#include <dxlib.h>
#include "gameoverscene.h"

EndingScene::EndingScene()
{
	GHandle1 = LoadGraph("numakuro/ED1.png");
	GHandle2 = LoadGraph("numakuro/ED2.png");

	ed[0] = "おつかれさまです。\nあなたのミズゴロウは無事\nヌマクローに進化することができました。";
	ed[1] = "一体どんなヌマクローになったのでしょうか？";
	ed[2] = "あなたのヌマクローを見てみましょう";
}

void EndingScene::Update()
{
	if (CheckHitKey(KEY_INPUT_8))
		ChangeScene(std::make_shared<GameOverScene>());
}

void EndingScene::Draw()
{
	if (x<2)
	{
		DrawGraph(0, 0, GHandle1, true); //育成が終わりました的な画面
	}//途中で下の画面に遷移
	else
	{
		DrawGraph(0, 0, GHandle2, true); //最終パラメータを表示
	}
	
	

	if (CheckHitKey(KEY_INPUT_SPACE))x++;
}