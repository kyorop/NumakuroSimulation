#include "Item.h"


Item::Item()
{
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

//�C���[�W�n���h���擾
int Item::GetImageHandlar()
{
	return _imageHandlar;
}




/*�ȉ�Food�N���X����*/

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

/*�ȉ�TrainingItem�N���X����*/

TrainingItem::TrainingItem()
{
}
TrainingItem::~TrainingItem()
{
}

int TrainingItem::GetRisingValue()
{
	return 0;//������
}

/*�ȉ�PowerItem�N���X����*/

PowerItem::PowerItem()
{}
PowerItem::~PowerItem()
{}

