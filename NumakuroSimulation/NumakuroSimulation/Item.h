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

protected:
	std::string _name;//名前
	int _cost;//値段
	ItemType _type;//アイテムの種類
	int _imageHandlar;
};

//食べ物
class Food:Item
{
public:
	Food();
	Food(std::string name, int recoveryValue);
	~Food();
	int GetRecoveryValue();
private:
	int _recoveryValue;//回復量
};

//トレーニングアイテム
class TrainingItem:Item
{
public:
	TrainingItem();
	~TrainingItem();
	int GetRisingValue();
};

//戦闘時アイテム
class PowerItem:Item
{
public:
	PowerItem();
	~PowerItem();
	int GetRisingValue();
};

