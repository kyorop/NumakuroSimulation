#include "OpeningScene.h"
#include <dxlib.h>
#include "iventselectscene.h"

OpeningScene::OpeningScene()
{
<<<<<<< HEAD
	op[0] = "今日、あなたのもとに新しいポケモンがやってきました。";
	op[1] = "ミズゴロウを可愛がって\n立派なポケモンにしてあげてくださいね";
=======
	GHandle = LoadGraph("numakuro/OP.png");
>>>>>>> bdf59488aa5de19308a359b761f13bbdbc89cd63
}

OpeningScene::~OpeningScene()
{
}

void OpeningScene::Update()
{
	if (CheckHitKey(KEY_INPUT_1))
		ChangeScene(std::make_shared<IventSelectScene>());
}

void OpeningScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);
}