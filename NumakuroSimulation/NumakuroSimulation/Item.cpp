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


//�l�i�擾
int Item::GetCost()
{
	return _cost;
}

//�A�C�e���̎�ގ擾
ItemType Item::GetType()
{
	return _type;
}

//�A�C�e�����擾
std::string Item::GetItemName()
{
	return _name;
}


/*�ȉ�Food�N���X����*/

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

/*�ȉ�TrainingItem�N���X����*/

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

/*�ȉ�PowerItem�N���X����*/

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

