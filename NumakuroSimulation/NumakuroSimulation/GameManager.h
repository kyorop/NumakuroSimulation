#pragma once
#include <vector>
#include "Vector2.h"
#include "Item.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	//初期化処理
	void Init();

	//買い物
	std::vector<Item> GetPurchasableItems();
	void Purchase(Item item);

	//トレーニング
	void DoTraining(TrainingItem trainingItem);

	//餌付け
	void DoFeed(Food food);

	//受験
	std::vector<Qualification> GetAcquirableQualifications();
	bool TakeExamination(Qualification qualification);

	//勉強
	void DoStudy();

	//ポケモンバトル
	int DoBattle(PowerItem* powerUpItem);

	//現在のステータス取得
	std::vector<Qualification> GetHavingQualifications();//所持してる資格リスト
	std::vector<Item> GetHavingItems();//所持してるアイテムリスト
	
	//現在の満腹度を取得
	int GetSatiety();

	//現在の戦闘力を取得
	int GetBattlePower();

	//現在の賢さを取得
	int GetCleverness();

	//現在の所持金を取得
	int GetHavingManey();

	//現在の週を取得
	int GetWeek();

	//現在のミステリーパラメータを取得
	Vector2 GetCurrentMystery();
	

private:
	int _satiety;//満腹度
	int _battlePower;//戦闘力
	int _cleverness;//賢さ
	int _money;//所持金
	int _currentWeek;//週
	Vector2 _currentMystery;//現在のミステリーパラメタ

	std::vector<Qualification> _acquirableQualifications;//取得可能資格
	std::vector<Item> _purchasableItems;//購入可能アイテム

	std::vector<Qualification> _havingQualifications;//所持資格
	std::vector<Item> _havingItems;//所持アイテム


};

