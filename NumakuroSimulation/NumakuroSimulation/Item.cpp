#include "Item.h"


Item::Item()
{
}


Item::~Item()
{
}


//値段取得
int Item::GetCost()
{
	return _cost;
}

//アイテムの種類取得
ItemType Item::GetType()
{
	return _type;
}

//アイテム名取得
std::string Item::GetItemName()
{
	return _name;
}

//イメージハンドラ取得
int Item::GetImageHandlar()
{
	return _imageHandlar;
}




/*以下Foodクラス実装*/

Food::Food()
{
}
Food::~Food()
{
}

Food::Food(std::string name, int recoveryValue)
{
	_name = name;
	_recoveryValue = recoveryValue;
	_type = Food_type;
}

int Food::GetRecoveryValue()
{
	return _recoveryValue;
}

/*以下TrainingItemクラス実装*/

TrainingItem::TrainingItem()
{
}
TrainingItem::~TrainingItem()
{
}

int TrainingItem::GetRisingValue()
{
	return _rigingValue;
}

/*以下PowerItemクラス実装*/

PowerItem::PowerItem()
{}
PowerItem::~PowerItem()
{}

int PowerItem::GetRisingValue()
{
	return _rigingValue;
}

