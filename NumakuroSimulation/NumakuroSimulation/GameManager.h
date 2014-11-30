#pragma once
#include <vector>

class Item;
enum Qualification;

class GameManager
{
public:
	GameManager();
	~GameManager();

	//買い物
	std::vector<Item> GetItemList();
	void Purchase(Item item);

	//トレーニング
	void DoTraining(Item trainingItem);

	//餌付け
	void DoFeed(Item food);

	//受験
	std::vector<Qualification> GetQualificationList();
	bool TakeExamination(Qualification qualification);

	//勉強
	void DoStudy();

	//ポケモンバトル
	void DoBattle(Item powerUpItem);

	//現在のステータス取得
	std::vector<Qualification> GetHavingQualifications();//所持してる資格リスト
	std::vector<Item> GetHavingItems();//所持してるアイテムリスト
	
	int GetSatiety();
	int GetBattlePower();
	int GetCleverness();
	int GetHavingManey();
	int GetWeek();
	

private:
	int _satiety;//満腹度
	int _battlePower;//戦闘力
	int _cleverness;//賢さ
	int _money;//所持金
	int _currentWeek;//週

	std::vector<Qualification> _acquirableQualifications;//取得可能資格
	std::vector<Item> _purchasableItems;//購入可能アイテム

	std::vector<Qualification> _havingQualifications;//取得可能資格
	std::vector<Item> _havingItems;//購入可能アイテム


};

