#include "GameManager.h"
#include "Item.h"
#include "Vector2.h"


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
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
	int n = _purchasableItems.size();

	for (size_t i = 0; i < n; i++)
	{
		if (_purchasableItems.at(i).GetItemName() == item.GetItemName())//�����A�C�e����T��
		{
			_purchasableItems.erase(_purchasableItems.begin() + i);//��������폜
		}
	}
}

//�g���[�j���O�����s���܂�
void GameManager::DoTraining(Item trainingItem)
{
	/*---�퓬�͂��㏸������֐�---*/
	_battlePower += 100;
}

void GameManager::DoFeed(Item food)
{
}

std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	std::vector<Qualification> a;
	return a;//������
}

bool GameManager::TakeExamination(Qualification qualification)
{
	return true;//������
}

void GameManager::DoStudy()
{
}

void GameManager::DoBattle(Item powerUpItem)
{
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
int GameManager::GetHavingManey();
int GameManager::GetWeek();
Vector2 GameManager::GetCurrentMystery();