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
	return 0;//������
}

//�A�C�e���̎�ގ擾
ItemType Item::GetType()
{
	return Food;//������
}

//�A�C�e�����擾
std::string Item::GetItemName()
{
	return "";//������
}

//�C���[�W�n���h���擾
int Item::GetImageHandlar()
{
	return 0;//������
}



int Food::GetRecoveryValue()
{
	return 0;//������
}

int TrainingItem::GetRisingValue()
{
	return 0;
}
