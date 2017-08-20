#include "DragonSword.h"

DragonSword::DragonSword()
{
	this->m_BaseDamage = 100;
	this->m_WeaponName = "WOG";
	this->suckRate = 20;
	this->holdRate = 30;
	this->critRate = 35;

}

int DragonSword::getBaseDamage()
{
	return this->m_BaseDamage;
}

int DragonSword::getSuckBlood()
{
	if (isTrigger(suckRate))
	{
		return this->m_BaseDamage * 2;  //According to weapon base damage half blood
	}
	return 0;
}

bool DragonSword::getHold()
{
	if (isTrigger(holdRate))
	{
		return true;
	}
	return false;
}

bool DragonSword::getCrit()
{
	if (isTrigger(critRate))
	{
		return true;
	}
	return false;
}

bool DragonSword::isTrigger(int rate)
{
	//Determine whether the effects are triggered
	//Random 1 ~ 100 Numbers

	int num = rand() % 100 + 1;
	if (num < rate)
	{
		return true;
	}
	return false;
}
