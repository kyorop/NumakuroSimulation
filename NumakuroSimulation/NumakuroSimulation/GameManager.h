#pragma once
#include <vector>

class Item;
enum Qualification;

class GameManager
{
public:
	GameManager();
	~GameManager();

	//������
	std::vector<Item> GetItemList();
	void Purchase(Item item);

	//�g���[�j���O
	void DoTraining(Item trainingItem);

	//�a�t��
	void DoFeed(Item food);

	//��
	std::vector<Qualification> GetQualificationList();
	bool TakeExamination(Qualification qualification);

	//�׋�
	void DoStudy();

	//�|�P�����o�g��
	void DoBattle(Item powerUpItem);

};

