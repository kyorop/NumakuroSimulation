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
	/*����������*/
	_money = 1000;
	_cleverness = 10;
	_battlePower = 100;
	_satiety = 100;
	_currentWeek = 1;
	_currentMystery = Vector2(0, 0);
	std::vector<Item> its{ Food("�������J��", 70, 20),
		Food("�`�L���N���X�v", 140, 50),
		Food("�s�b�c�@", 200, 80),
		TrainingItem("�v���e�C��", 70, 20),
		TrainingItem("�����Ȃ���", 140, 50),
		TrainingItem("�����Ƌ����Ȃ��", 200, 80),
		PowerItem("���|D", 70, 20),
		PowerItem("���b�h�u��", 140, 50),
		PowerItem("�������_�i�g���E���J�t�F�C��", 200, 80) };
}

//�w���\�A�C�e�����X�g�擾
std::vector<Item> GameManager::GetPurchasableItems()
{
	return std::vector<Item>(_purchasableItems);//�R�s�[���ĕԂ�
}

//�w��A�C�e���w��(�A�C�e���͍w���\�Ƃ����O��)
void GameManager::Purchase(Item item)
{
	int cost = item.GetCost();
	_money -= cost;//�����������炵�A
	size_t n = _purchasableItems.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_purchasableItems.at(i).GetItemName() == item.GetItemName())//�����A�C�e����T��
		{
			_purchasableItems.erase(_purchasableItems.begin() + i);//��������폜
		}
	}
}

//�g���[�j���O�����s���܂�
void GameManager::DoTraining(TrainingItem* trainingItem)
{
	int powerup = 0;

	/*---�A�C�e����_battlePower�ɂ����炳������---*/
	if (trainingItem != NULL)
	{
		powerup = trainingItem->GetRisingValue();
	}
	_battlePower += powerup;
	_battlePower += 100;
	_satiety -= 10;
}

//�a�t��
void GameManager::DoFeed(Food food)
{
	int recovery_value = food.GetRecoveryValue();
	_satiety += recovery_value;
	/*----100�𒴂�����؂肷��---*/
	if (_satiety > 100)
		_satiety = 100;

}

//�󌱉\���i���X�g�擾
std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	return std::vector<Qualification>(_acquirableQualifications);
}

//��
bool GameManager::TakeExamination(Qualification qualification)
{
	size_t n = _acquirableQualifications.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_acquirableQualifications.at(i) == qualification)//�����A�C�e����T��
		{
			_acquirableQualifications.erase(_acquirableQualifications.begin() + i);//��������폜
		}
	}



	return true;
}

//�׋�
void GameManager::DoStudy()
{
	_cleverness += 10;
}

//�o�g��
bool GameManager::DoBattle(PowerItem* powerUpItem)
{
	int enemy_power = (GetRand(3) + 1) * 100;//���̒l
	int powerup = 0;
	int Quali = 0;

		/*---�A�C�e����_battlePower�ɂ����炳������---*/
	if (powerUpItem != NULL)
	{
		powerup = powerUpItem->GetRisingValue();
	}


	/*---���i��_battlePower�ɂ����炳������---*/
	std::vector<Qualification> list = GetHavingQualifications();
	size_t n = list.size();
	for (size_t i = 0; i < n; i++)
	{
		if (list.at(i) == BattleBonus)
		{
			Quali = 40;
		}
	}

	int power = _battlePower + _satiety + powerup + Quali ;//sikakumo

	_satiety -= 10;
	if (power >= enemy_power)
	{
		_money += 500;
	}
	return true;
}

//�������Ă鎑�i���X�g
std::vector<Qualification> GameManager::GetHavingQualifications()
{
	return std::vector<Qualification>(_havingQualifications);
}

//�������Ă�A�C�e�����X�g
std::vector<Item> GameManager::GetHavingItems()
{
	return std::vector<Item>(_havingItems);
}

//���݂̖����x���擾
int GameManager::GetSatiety()
{
	return _satiety;
}

//���݂̐퓬�͂��擾
int GameManager::GetBattlePower()
{
	return _battlePower;
}

//���݂̌������擾
int GameManager::GetCleverness()
{
	return _cleverness;
}

//���݂̏��������擾
int GameManager::GetHavingManey()
{
	return _money;
}

//���݂̏T���擾
int GameManager::GetWeek()
{
	return _currentWeek;
}

//���݂̃~�X�e���[�p�����[�^���擾
Vector2 GameManager::GetCurrentMystery()
{
	return Vector2(_currentMystery);
}

//���̏T���I������
void GameManager::FinishThisWeek()
{
	_currentWeek++;
}
