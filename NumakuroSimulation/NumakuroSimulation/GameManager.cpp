#include "GameManager.h"
#include "Item.h"
#include "Vector2.h"


GameManager::GameManager()
{
}


GameManager::~GameManager()
{
}


std::vector<Item> GameManager::GetPurchasableItems()
{
	std::vector<Item> a;
	return a;//仮処理
}

void GameManager::Purchase(Item item)
{
}

void GameManager::DoTraining(Item trainingItem)
{
}

void GameManager::DoFeed(Item food)
{
}

std::vector<Qualification> GameManager::GetAcquirableQualifications()
{
	std::vector<Qualification> a;
	return a;//仮処理
}

bool GameManager::TakeExamination(Qualification qualification)
{
	return true;//仮処理
}

void GameManager::DoStudy()
{
}

void GameManager::DoBattle(Item powerUpItem)
{
}