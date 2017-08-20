#pragma once 
#include <iostream>
#include "Weapon.h"
#include <string>
using namespace std;


class Knife :public Weapon
{
public:
	Knife();

	//Get base damage
	virtual int getBaseDamage();

	//Get the blood sucking properties
	virtual int getSuckBlood();

	//Get the pause propert
	virtual bool getHold();

	//Gets the properties of the bash
	virtual bool getCrit();

};


