﻿#include "IventSelectScene.h"
#include "DxLib.h"
#include "shoppingscene.h"
#include "feedingscene.h"
#include "examinationscene.h"
#include "battlescene.h"
#include "studyscene.h"
#include "titlescene.h"
#include "endingscene.h"

IventSelectScene::IventSelectScene()
	:x(50),
	y(450)
{
	GHandle = LoadGraph("numakuro/ゲーム画面.png");
	GMizu1 = LoadGraph("numakuro/1201508991_o.png");
	GMizu2 = LoadGraph("numakuro/a23e082a.jpg");
	ivents[0] = LoadGraph("numakuro/トレーニングアイコン.png");
	ivents[1] = LoadGraph("numakuro/バトルアイコン.png");
	ivents[2] = LoadGraph("numakuro/餌付けアイコン.png");
	ivents[3] = LoadGraph("numakuro/受験.png");
	ivents[4] = LoadGraph("numakuro/買い物アイコン.png");
	ivents[5] = LoadGraph("numakuro/勉強.png");
	eventStrings[0] = "トレーニングする";
	eventStrings[1] = "バトルする";
	eventStrings[2] = "餌付けする";
	eventStrings[3] = "受験する";
	eventStrings[4] = "買い物する";
	eventStrings[5] = "勉強する";
	x_box = x;
	y_box = y;
	inputFlag = false;
	eventCount = TRAINING;
}


void IventSelectScene::Update()
{
	if (CheckHitKey(KEY_INPUT_2))
		ChangeScene(std::make_shared<ShoppingScene>());

	if (CheckHitKey(KEY_INPUT_RIGHT)&&!inputFlag)
	{
		x_box += 60;
		inputFlag = true;
		switch (eventCount)
		{
		case TRAINING: eventCount = BATTLE; break;
		case BATTLE:eventCount = FEED; break;
		case FEED:eventCount = EXAMINATION; break;
		case EXAMINATION:eventCount = SHOPPING; break;
		case SHOPPING:eventCount = STUDY; break;
		case STUDY: break;
		default: break;
		}
	}
	else if (CheckHitKey(KEY_INPUT_LEFT)&&!inputFlag)
	{
		x_box -= 60;
		inputFlag = true;
		switch (eventCount)
		{
		case TRAINING: break;
		case BATTLE:eventCount = TRAINING; break;
		case FEED:eventCount = BATTLE; break;
		case EXAMINATION:eventCount = FEED; break;
		case SHOPPING:eventCount = EXAMINATION; break;
		case STUDY:eventCount = SHOPPING; break;
		default: break;
		}
	}
	else if (!CheckHitKeyAll())
	{
		inputFlag = false;
	}

	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		switch (eventCount)
		{
		case TRAINING: 
//			ChangeScene(std::make_shared<ShoppingScene>()); 
			break;
		case BATTLE:
			ChangeScene(std::make_shared<BattleScene>()); 
			break;
		case FEED:
			ChangeScene(std::make_shared<FeedingScene>());
			break;
		case EXAMINATION: 
			ChangeScene(std::make_shared<ExaminationScene>()); 
			break;
		case SHOPPING: 
			ChangeScene(std::make_shared<ShoppingScene>()); 
			break;
		case STUDY: 
			ChangeScene(std::make_shared<StudyScene>()); 
			break;
		default: break;
		}
	}
}

void IventSelectScene::Draw()
{
	DrawGraph(0, 0, GHandle, true);

	DrawGraph(250, 200, GMizu, true);

	for (int i = 0; i < 6;i++)
	{
		DrawGraph(x+60*i, y, ivents[i], true);
	}



	DrawBox(x_box, y_box, x_box + 50, y_box + 50, GetColor(255, 0, 0), false);
	DrawBox(x_box+1, y_box+1, x_box + 49, y_box + 49, GetColor(255, 0, 0), false);

	switch (eventCount)
	{
	case TRAINING: 
		DrawString(x, y + 70, eventStrings[0], GetColor(0, 0, 0));
		break;
	case BATTLE:
		DrawString(x, y + 70, eventStrings[1], GetColor(0, 0, 0));
		break;
	case FEED: 
		DrawString(x, y + 70, eventStrings[2], GetColor(0, 0, 0)); 
		break;
	case EXAMINATION: 
		DrawString(x, y + 70, eventStrings[3], GetColor(0, 0, 0));
		break;
	case SHOPPING: 
		DrawString(x, y + 70, eventStrings[4], GetColor(0, 0, 0)); 
		break;
	case STUDY: 
		DrawString(x, y + 70, eventStrings[5], GetColor(0, 0, 0)); 
		break;
	default: 
		break;
	}

	DrawFormatString(30, 8, GetColor(0, 0, 0), "満腹度：%d", gameManager->GetSatiety());
	DrawFormatString(30, 25, GetColor(0, 0, 0), "所持金：%d", gameManager->GetHavingManey());
	DrawFormatString(150, 25, GetColor(0, 0, 0), "かしこさ：%d", gameManager->GetCleverness());
	
	if (gameManager->GetSatiety() >= 80)
		GMizu = GMizu1;
	else
		GMizu = GMizu1;
}