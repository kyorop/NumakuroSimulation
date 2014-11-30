#pragma once

#include<string>

//アイテムの種類
enum ItemType
{
	Food = 0,
	Training = 1,
	PowerUp
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

class Food
{
public:
	int GetRecoveryValue();
};

class TrainingItem
{
public:
	int GetRisingValue();
};

class PowerItem
{
public:
	int GetRisingValue();
};

