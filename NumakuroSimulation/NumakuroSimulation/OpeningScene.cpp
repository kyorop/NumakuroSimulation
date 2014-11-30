#include "OpeningScene.h"
#include <dxlib.h>
#include "iventselectscene.h"

OpeningScene::OpeningScene()
{
	x = 0;
	op[0] = "今日、あなたのもとに新しいポケモンがやってきました。";
	op[1] = "ミズゴロウを可愛がって\n立派なポケモンにしてあげてくださいね";
	GHandle = LoadGraph("numakuro/OP.png");
	input = false;
}

OpeningScene::~OpeningScene()
{
}

void OpeningScene::Update()
{
	if (CheckHitKey(KEY_INPUT_1))
		ChangeScene(std::make_shared<IventSelectScene>());
	if (CheckHitKey(KEY_INPUT_SPACE)&&!input)
	{
		x++;
		input = true;
	}
	else if (!CheckHitKeyAll())
	{
		input = false;
	}
	if (x == 2)ChangeScene(std::make_shared<IventSelectScene>());
}

void OpeningScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);
	DrawFormatString(80, 80, GetColor(0, 0, 0), op[x]);
	
}