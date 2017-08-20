#pragma  once
#include <iostream>
#include <string>
using namespace std;


class Weapon
{
public:
	//Get base damage
	virtual int getBaseDamage() = 0;

	//Get the blood sucking properties
	virtual int getSuckBlood() = 0;

	//Get the pause propert
	virtual bool getHold() = 0;

	//Gets the properties of the bash
	virtual bool getCrit() = 0;


	string m_WeaponName; //weapon name
	int m_BaseDamage; //Base Damage
};
