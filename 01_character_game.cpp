#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include "Hero.h"
#include "Monster.h"
#include "Weapon.h"
#include "Knife.h"
#include "DragonSword.h"
#include <ctime>
using namespace std;

void play()
{
	//Create  monster
	Monster * monster = new Monster;
	//Create  hero
	Hero * hero = new Hero;

	//Create  Weapon
	Weapon * kinfe = new Knife;
	Weapon * dragon = new DragonSword;

	//Let the user choose the weapon

	cout << "Please select weapon£º" << endl;
	cout << "1. You don't need a weapon" << endl;
	cout << "2. Ordinary weapon" << endl;
	cout << "3. WOG" << endl;

	int oper;
	cin >> oper;
	switch (oper)
	{
	case 1:
		cout << "You are very powerful £¡ stripling" << endl;
		break;
	case 2:
		hero->EquipWeapon(kinfe);
		break;
	case 3:
		hero->EquipWeapon(dragon);
		break;
	}

	getchar(); 

	int round = 1;

	while (true)
	{
		getchar();

		system("cls");

		cout << "----- The " << round << " bout ------" << endl;

		if (hero->m_Hp <= 0)
		{
			cout << "Hero " << hero->m_Name << "  demise £¬Game over" << endl;
			break;
		}
		hero->Attack(monster);

		if (monster->m_Hp <= 0)
		{
			cout << "Monster  " << monster->m_Name << "  demise£¬have successfully done one's job" << endl;
			break;
		}
		monster->Attack(hero);


		if (hero->m_Hp <= 0)
		{
			cout << "Hero  " << hero->m_Name << " demise £¬Game over" << endl;
			break;
		}

		cout << "Hero     " << hero->m_Name << "  residue HP£º" << hero->m_Hp << endl;
		cout << "Monster  " << monster->m_Name << "  residue HP£º" << monster->m_Hp << endl;

		round++;


	}

	delete monster;
	delete hero;
	delete kinfe;
	delete dragon;

}

int main(){

	srand((unsigned int)time(NULL));

	play();


	system("pause");
	return EXIT_SUCCESS;
}