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
	std::vector<Item> its{ Food("乾燥ワカメ", 70, 20),
		Food("チキンクリスプ", 140, 50),
		Food("ピッツァ", 200, 80),
		TrainingItem("プロテイン", 70, 20),
		TrainingItem("強くなれる薬", 140, 50),
		TrainingItem("もっと強くなる薬", 200, 80),
		PowerItem("リポD", 70, 20),
		PowerItem("レッドブル", 140, 50),
		PowerItem("安息香酸ナトリウムカフェイン", 200, 80) };
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
}

//トレーニングを実行します
void GameManager::DoTraining(TrainingItem* trainingItem)
{
	int powerup = 0;

	/*---アイテムで_battlePowerにもたらされる効果---*/
	if (trainingItem != NULL)
	{
		powerup = trainingItem->GetRisingValue();
	}
	_battlePower += powerup;
	_battlePower += 100;
	_satiety -= 10;
}

//餌付け
void GameManager::DoFeed(Food food)
{
	int recovery_value = food.GetRecoveryValue();
	_satiety += recovery_value;
	/*----100を超えたら切りすて---*/
	if (_satiety > 100)
		_satiety = 100;

}

//受験可能資格リスト取得
std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	return std::vector<Qualification>(_acquirableQualifications);
}

//受験
bool GameManager::TakeExamination(Qualification qualification)
{
	size_t n = _acquirableQualifications.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_acquirableQualifications.at(i) == qualification)//同名アイテムを探す
		{
			_acquirableQualifications.erase(_acquirableQualifications.begin() + i);//見つけたら削除
		}
	}



	return true;
}

//勉強
void GameManager::DoStudy()
{
	_cleverness += 10;
}

//バトル
bool GameManager::DoBattle(PowerItem* powerUpItem)
{
	int enemy_power = (GetRand(3) + 1) * 100;//仮の値
	int powerup = 0;

		/*---アイテムで_battlePowerにもたらされる効果---*/
	if (powerUpItem != NULL)
	{
		powerup = powerUpItem->GetRisingValue();
	}

	/*---資格で_battlePowerにもたらされる効果---*/


	int power = _battlePower + _satiety + powerup ;//sikakumo

	_satiety -= 10;
	if (power >= enemy_power)
	{
		_money += 500;
	}
	return true;
}

//所持してる資格リスト
std::vector<Qualification> GameManager::GetHavingQualifications()
{
	return std::vector<Qualification>(_havingQualifications);
}

//所持してるアイテムリスト
std::vector<Item> GameManager::GetHavingItems()
{
	return std::vector<Item>(_havingItems);
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

//この週を終了する
void GameManager::FinishThisWeek()
{
	_currentWeek++;
}
