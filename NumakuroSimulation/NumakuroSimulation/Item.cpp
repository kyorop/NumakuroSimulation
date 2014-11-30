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
	return 0;//仮実装
}

//アイテムの種類取得
ItemType Item::GetType()
{
	return Food_type;//仮実装
}

//アイテム名取得
std::string Item::GetItemName()
{
	return "";//仮実装
}

//イメージハンドラ取得
int Item::GetImageHandlar()
{
	return 0;//仮実装
}



int Food::GetRecoveryValue()
{
	return 0;//仮実装
}

int TrainingItem::GetRisingValue()
{
	return 0;//仮実装
}
