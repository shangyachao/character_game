#pragma once 
#include <iostream>
#include "Weapon.h"
#include <string>
using namespace std;

class DragonSword:public Weapon
{
public:
	DragonSword();

	//Get base damage
	virtual int getBaseDamage() ;

	//Get the blood sucking properties
	virtual int getSuckBlood();

	//Get the pause propert
	virtual bool getHold();

	//Gets the properties of the bash
	virtual bool getCrit();

	//  suck blood  immobilize critical strike 
	int suckRate;
	int holdRate;
	int critRate;

	//The pass probability judgment is triggered
	bool isTrigger(int rate);


};