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

protected:
	std::string _name;//���O
	int _cost;//�l�i
	ItemType _type;//�A�C�e���̎��
	int _imageHandlar;
};

//�H�ו�
class Food:Item
{
public:
	Food();
	Food(std::string name, int recoveryValue);
	~Food();
	int GetRecoveryValue();
private:
	int _recoveryValue;//�񕜗�
};

//�g���[�j���O�A�C�e��
class TrainingItem:Item
{
public:
	TrainingItem();
	~TrainingItem();
	int GetRisingValue();
};

//�퓬���A�C�e��
class PowerItem:Item
{
public:
	PowerItem();
	~PowerItem();
	int GetRisingValue();
};

