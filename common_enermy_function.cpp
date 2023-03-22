#include <iostream>
#include "total.h"
using namespace std;

com_enem::com_enem(int heal, int dama, const char* nm, int miss)
{
	health = maxHealth =heal;
	damage = dama;
	pec_to_miss = miss;
	be_damage = 0;
	healtime = 0;

	nameLen = strlen(nm);
	name = new char[nameLen + 1];
	strcpy_s(name, nameLen + 1, nm);

}

com_enem::com_enem()
{
	health = damage = pec_to_miss = be_damage = healtime = 0;

	nameLen = 4;
	name = new char[nameLen + 1];
	strcpy_s(name, nameLen + 1, "nm");
}

com_enem::~com_enem()
{
	delete[] name;
}

void com_enem::heal(int num)
{
	health += num;
}

void com_enem::be_attack(int num)
{
	if (num >= health)
		health = 0;
	else
		health -= num;
}