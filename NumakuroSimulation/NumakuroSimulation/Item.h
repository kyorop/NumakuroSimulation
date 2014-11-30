#pragma once

#include<string>

//�A�C�e���̎��
enum ItemType
{
	Food = 0,
	Training = 1,
	PowerUp
};

//�Q�[�����A�C�e���̊��N���X
class Item
{
public:
	Item();
	~Item();

	//�l�i�擾
	int GetCost();

	//�A�C�e���̎�ގ擾
	ItemType GetType();

	//�A�C�e�����擾
	std::string GetItemName();

	//�C���[�W�n���h���擾
	int GetImageHandlar();
};

class Food
{
public:
	int GetRecoveryValue();
};

class TrainingItem
{
public:
	int GetRisingValue();
};

class PowerItem
{
public:
	int GetRisingValue();
};

