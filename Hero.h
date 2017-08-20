#pragma once 
#include <iostream>
#include "Weapon.h"
#include <string>
#include "Monster.h"
using namespace std;

class Monster;

class Hero
{
public:
	Hero();

	string m_Name; //name

	int m_Atk; //ATK

	int m_Def; // defensive power

	int m_Hp; //HP

	Weapon * weapon; //weapon

	void EquipWeapon(Weapon * weapon);

	void Attack( Monster * monster );
};