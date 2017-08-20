#include "Hero.h"

Hero::Hero()
{
	this->m_Hp = 500;

	this->m_Atk = 50;

	this->m_Def = 50;

	this->m_Name = "SYC";

	this->weapon = NULL;

}

//equip  weapon
void Hero::EquipWeapon(Weapon * weapon)
{
	this->weapon = weapon;

	cout << "Hero£º" << this->m_Name << " equip weapon << " << this->weapon->m_WeaponName << " >> " << endl;

}
//attack
void Hero::Attack(Monster * monster)
{
	int damage = 0;
	int addHp = 0;
	bool isHold = false;
	bool isCrit = false;

	if (this->weapon == NULL) //No weapon
	{
		damage = this->m_Atk;
	}
	else
	{
		//Base Damage
		damage = this->m_Atk + this->weapon->getBaseDamage();
		//calculate  suck blood
		addHp = this->weapon->getSuckBlood();
		//calculate  immobilize
		isHold = this->weapon->getHold();
		//calculate   critical strike
		isCrit = this->weapon->getCrit();
	}
	if (isCrit) //critical strike harm addition
	{
		damage = damage * 2;
		cout << "The hero's weapon triggered a fatal blow£¬The monster received double damage£¬damage£º" << damage << endl;
	}
	if (isHold)
	{
		cout << "The hero's weapon triggers the fixed effect£¬The monster stopped attacking a round"<< endl;
	}
	if (addHp > 0)
	{
		cout << "The hero's weapon triggers the suction effect£¬The hero increases the amount of HP:" << addHp << endl;
	}

	//Set the monster 
	monster->m_Hold = isHold;

	//Calculate real damage
	int trueDamage = (damage - monster->m_Def) > 0 ? damage - monster->m_Def : 1;

	monster->m_Hp -= trueDamage;

	this->m_Hp += addHp;

	cout << "Hero  " << this->m_Name << "attack   enemy " << monster->m_Name << "give rise to harm: " << trueDamage << endl;
}
