#pragma once
#include <vector>
#include "Vector2.h"

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

	//���݂̃X�e�[�^�X�擾
	std::vector<Qualification> GetHavingQualifications();//�������Ă鎑�i���X�g
	std::vector<Item> GetHavingItems();//�������Ă�A�C�e�����X�g
	
	int GetSatiety();
	int GetBattlePower();
	int GetCleverness();
	int GetHavingManey();
	int GetWeek();
	

private:
	int _satiety;//�����x
	int _battlePower;//�퓬��
	int _cleverness;//����
	int _money;//������
	int _currentWeek;//�T
	Vector2 _currentMystery;//���݂̃~�X�e���[�p�����^

	std::vector<Qualification> _acquirableQualifications;//�擾�\���i
	std::vector<Item> _purchasableItems;//�w���\�A�C�e��

	std::vector<Qualification> _havingQualifications;//�擾�\���i
	std::vector<Item> _havingItems;//�w���\�A�C�e��


};

