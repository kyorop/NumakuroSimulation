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
	std::vector<Item> its{ Food("Water", 10) };
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
	_currentWeek++;
}

//�g���[�j���O�����s���܂�
void GameManager::DoTraining(TrainingItem trainingItem)
{
	/*---�퓬�͂��㏸������֐�---*/
	_battlePower += 100;//���̒l
	_satiety -= 100;//���̒l
	_currentWeek++;
}

void GameManager::DoFeed(Food food)
{
	int recovery_value = food.GetRecoveryValue();
	_satiety += recovery_value;

	/*---����𒴂�����L�����Z������R�[�h������---*/

	_currentWeek++;
}

//�擾�\���i���X�g���擾
std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	std::vector<Qualification> a;
	_currentWeek++;
	return a;//������
}

//�󌱂��܂�
bool GameManager::TakeExamination(Qualification qualification)
{
	size_t n = _acquirableQualifications.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_acquirableQualifications.at(i).GetItemName() == qualification.GetItemName())//�����A�C�e����T��
		{
			_acquirableQualifications.erase(_acquirableQualifications.begin() + i);//��������폜
		}
	}
	_currentWeek++;
	return true;
}

//�׋����܂�
void GameManager::DoStudy()
{
	_cleverness += 10;//���̒l
	_currentWeek++;
}

//�|�P�����o�g�������܂�
bool GameManager::DoBattle(PowerItem* powerUpItem)
{
	int battlPpower_enemy = (GetRand(3) + 1) * 100;//���̒l

	if (powerUpItem != NULL)
	{
		/*---�A�C�e����_battlePower�ɂ����炳������---*/
	}

	_satiety -= 100;//���̒l
	if (_battlePower >= battlPpower_enemy)
	{
		_money += 500;//���̒l
	}
	_currentWeek++;
	return true;
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
