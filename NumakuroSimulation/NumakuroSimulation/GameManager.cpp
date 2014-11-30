#include <DxLib.h>
#include "GameManager.h"
#include "Item.h"
#include "Vector2.h"


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}

void GameManager::Init()
{
	/*初期化処理*/
	_money = 1000;
	_cleverness = 10;
	_battlePower = 100;
	_satiety = 100;
	_currentWeek = 1;
	_currentMystery = Vector2(0, 0);
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
	size_t n = _purchasableItems.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_purchasableItems.at(i).GetItemName() == item.GetItemName())//同名アイテムを探す
		{
			_purchasableItems.erase(_purchasableItems.begin() + i);//見つけたら削除
		}
	}
	_currentWeek++;
}

//トレーニングを実行します
void GameManager::DoTraining(TrainingItem trainingItem)
{
	/*---戦闘力を上昇させる関数---*/
	_battlePower += 100;//仮の値
	_satiety -= 100;//仮の値
	_currentWeek++;
}

void GameManager::DoFeed(Food food)
{
	int recovery_value = food.GetRecoveryValue();
	_satiety += recovery_value;

	/*---上限を超えたらキャンセルするコードを書く---*/

	_currentWeek++;
}

std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	std::vector<Qualification> a;
	_currentWeek++;
	return a;//仮処理
}

bool GameManager::TakeExamination(Qualification qualification)
{
	_currentWeek++;
	return true;//仮処理
}

void GameManager::DoStudy()
{
	_cleverness += 100;//仮の値
	_currentWeek++;
}

int GameManager::DoBattle(PowerItem* powerUpItem)
{
	int battlPpower_enemy = (GetRand(3) + 1) * 100;//仮の値

	if (powerUpItem != NULL)
	{
		/*---アイテムで_battlePowerにもたらされる効果---*/
	}

	_satiety -= 100;//仮の値
	if (_battlePower >= battlPpower_enemy);
	{
		_money += 500;//仮の値
	}
	_currentWeek++;
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

//現在の所持金を取得
int GameManager::GetHavingManey()
{
	return _money;
}

//現在の週を取得
int GameManager::GetWeek()
{
	return _currentWeek;
}

//現在のミステリーパラメータを取得
Vector2 GameManager::GetCurrentMystery()
{
	return Vector2(_currentMystery);
}
