#pragma once
#include <vector>
#include "Vector2.h"
#include "Item.h"

class GameManager
{
public:
	GameManager();
	~GameManager();

	//����������
	void Init();

	//������
	std::vector<Item> GetPurchasableItems();
	void Purchase(Item item);

	//�g���[�j���O
	void DoTraining(TrainingItem trainingItem);

	//�a�t��
	void DoFeed(Food food);

	//��
	std::vector<Qualification> GetAcquirableQualifications();
	bool TakeExamination(Qualification qualification);

	//�׋�
	void DoStudy();

	//�|�P�����o�g��
	bool DoBattle(PowerItem* powerUpItem);

	//���݂̃X�e�[�^�X�擾
	std::vector<Qualification> GetHavingQualifications();//�������Ă鎑�i���X�g
	std::vector<Item> GetHavingItems();//�������Ă�A�C�e�����X�g
	
	//���݂̖����x���擾
	int GetSatiety();

	//���݂̐퓬�͂��擾
	int GetBattlePower();

	//���݂̌������擾
	int GetCleverness();

	//���݂̏��������擾
	int GetHavingManey();

	//���݂̏T���擾
	int GetWeek();

	//���݂̃~�X�e���[�p�����[�^���擾
	Vector2 GetCurrentMystery();

	//���̏T���I������
	void FinishThisWeek();
	

private:
	int _satiety;//�����x
	int _battlePower;//�퓬��
	int _cleverness;//����
	int _money;//������
	int _currentWeek;//�T
	Vector2 _currentMystery;//���݂̃~�X�e���[�p�����^

	std::vector<Qualification> _acquirableQualifications;//�擾�\���i
	std::vector<Item> _purchasableItems;//�w���\�A�C�e��

	std::vector<Qualification> _havingQualifications;//�������i
	std::vector<Item> _havingItems;//�����A�C�e��


};

