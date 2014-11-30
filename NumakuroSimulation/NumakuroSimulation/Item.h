#pragma once

#include<string>

//���i�񋓑�
enum Qualification
{
	SaveMoney,//�ߖ�
	Cook,//����
	Trainer,//�g���[�j���O
	BattleBonus
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
	Item(std::string name,int cost,ItemType type);
	~Item();

	//�l�i�擾
	int GetCost();

	//�A�C�e���̎�ގ擾
	ItemType GetType();

	//�A�C�e�����擾
	std::string GetItemName();

protected:
	std::string _name;//���O
	int _cost;//�l�i
	ItemType _type;//�A�C�e���̎��
};

//�H�ו�
class Food:public Item
{
public:
	Food(std::string name,int cost, int recoveryValue);
	~Food();
	int GetRecoveryValue();
private:
	int _recoveryValue;//�񕜗�
};

//�g���[�j���O�A�C�e��
class TrainingItem :public Item
{
public:
	TrainingItem(std::string name, int cost, int rigingValue);
	~TrainingItem();
	int GetRisingValue();
private:
	int _rigingValue;
};

//�퓬���A�C�e��
class PowerItem :public Item
{
public:
	PowerItem(std::string name, int cost, int rigingValue);
	~PowerItem();
	int GetRisingValue();
private:
	int _rigingValue;
};

