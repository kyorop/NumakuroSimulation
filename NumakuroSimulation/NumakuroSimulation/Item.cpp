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
	return 0;
}

//アイテムの種類取得
ItemType Item::GetType()
{
	return Food;
}

//アイテム名取得
std::string Item::GetItemName()
{
	return "";
}

//イメージハンドラ取得
int Item::GetImageHandlar()
{
	return 0;
}
