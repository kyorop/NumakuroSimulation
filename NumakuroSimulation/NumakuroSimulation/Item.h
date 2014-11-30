#pragma once

#include<string>

//���i�񋓑�
enum Qualification
{
	SaveMoney,//�ߖ�
	Cook,//����
	Trainer//�g���[�j���O
};

//�A�C�e���̎��
enum ItemType
{
	Food_type = 0,
	Training_type = 1,
	PowerUp_type
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

class Food:Item
{
public:
	int GetRecoveryValue();
};

class TrainingItem:Item
{
public:
	int GetRisingValue();
};

class PowerItem:Item
{
public:
	int GetRisingValue();
};

