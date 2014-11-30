#include "Item.h"


Item::Item(std::string name, int cost, ItemType type)
{
	_name = name;
	_cost = cost;
	_type = type;
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


/*以下Foodクラス実装*/

Food::~Food()
{
}

Food::Food(std::string name, int cost, int recoveryValue) :Item(name,cost,Food_type)
{
	_recoveryValue = recoveryValue;
}

int Food::GetRecoveryValue()
{
	return _recoveryValue;
}

/*以下TrainingItemクラス実装*/

TrainingItem::~TrainingItem()
{
}

TrainingItem::TrainingItem(std::string name, int cost, int rigingValue) :Item(name, cost, Training_type)
{
	_rigingValue = rigingValue;
}

int TrainingItem::GetRisingValue()
{
	return _rigingValue;
}

/*以下PowerItemクラス実装*/

PowerItem::~PowerItem()
{}

PowerItem::PowerItem(std::string name, int cost, int rigingValue) :Item(name, cost, Training_type)
{
	_rigingValue = rigingValue;
}

int PowerItem::GetRisingValue()
{
	return _rigingValue;
}

