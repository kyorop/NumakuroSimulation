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

};

