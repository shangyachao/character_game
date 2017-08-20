#include "Monster.h"


Monster::Monster()
{
	this->m_Hp = 10000;

	this->m_Atk = 70;

	this->m_Def = 40;

	this->m_Hold = false;

	this->m_Name = "Satan";
}

void Monster::Attack(Hero * hero)
{
	if (this->m_Hold)
	{
		cout << " Monster  " << this->m_Name << "immobilization£¬This turn cannot  attacked" << endl;
		return;
	}
	int num = rand() % 10 + 1;
	if (num > 5)
	{
		num = this->m_Atk * 2;
	}
	else
	{
		num = this->m_Atk;
	}
	//Calculate attack damage
	int damage = (num - hero->m_Def) > 0 ? num - hero->m_Def : 1;

	hero->m_Hp -= damage;

	cout << "Monster  " << this->m_Name << "Attack   Hero " << hero->m_Name << "  cause harm  " << damage << endl;

}
