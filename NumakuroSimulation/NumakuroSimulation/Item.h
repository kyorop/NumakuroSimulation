#pragma once

#include<string>

//資格列挙体
enum Qualification
{
	SaveMoney,//節約
	Cook,//料理
	Trainer//トレーニング
};

//アイテムの種類
enum ItemType
{
	Food_type = 0,
	Training_type = 1,
	PowerUp_type
};

//ゲーム内アイテムの基底クラス
class Item
{
public:
	Item();
	~Item();

	//値段取得
	int GetCost();

	//アイテムの種類取得
	ItemType GetType();

	//アイテム名取得
	std::string GetItemName();

	//イメージハンドラ取得
	int GetImageHandlar();
};

class Food:Item
{
public:
	int GetRecoveryValue();
};

class TrainingItem:Item
{
public:
	int GetRisingValue();
};

class PowerItem:Item
{
public:
	int GetRisingValue();
};

