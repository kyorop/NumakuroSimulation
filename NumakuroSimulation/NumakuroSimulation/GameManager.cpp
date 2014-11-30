#include "GameManager.h"
#include "Item.h"
#include "Vector2.h"


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}

//購入可能アイテムリスト取得
std::vector<Item> GameManager::GetPurchasableItems()
{
	return std::vector<Item>(_purchasableItems);//コピーして返す
}

//指定アイテム購入(アイテムは購入可能という前提)
void GameManager::Purchase(Item item)
{
	int cost = item.GetCost();
	_money -= cost;//所持金を減らし、
	int n = _purchasableItems.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_purchasableItems.at(i).GetItemName() == item.GetItemName())//同名アイテムを探す
		{
			_purchasableItems.erase(_purchasableItems.begin() + i);//見つけたら削除
		}
	}
}

//トレーニングを実行します
void GameManager::DoTraining(TrainingItem trainingItem)
{
	/*---戦闘力を上昇させる関数---*/
	_battlePower += 100;
}

void GameManager::DoFeed(Food food)
{
	int recovery_value = food.GetRecoveryValue();
	_satiety += recovery_value;

	//上限を超えたらキャンセルするコードを書く
}

std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	std::vector<Qualification> a;
	return a;//仮処理
}

bool GameManager::TakeExamination(Qualification qualification)
{
	return true;//仮処理
}

void GameManager::DoStudy()
{
}

void GameManager::DoBattle(PowerItem powerUpItem)
{

}

//現在の満腹度を取得
int GameManager::GetSatiety()
{
	return _satiety;
}

//現在の戦闘力を取得
int GameManager::GetBattlePower()
{
	return _battlePower;
}

//現在の賢さを取得
int GameManager::GetCleverness()
{
	return _cleverness;
}
int GameManager::GetHavingManey();
int GameManager::GetWeek();
Vector2 GameManager::GetCurrentMystery();