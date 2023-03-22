#include <stdlib.h>
#include <iostream>
#include "COBADV.h"
#include "Hero.h"
#include "commen_enermy.h"
using namespace std;

com_em::com_em(int heal, int dama, const char* nm, int miss)
{
	health = heal;
	damage = dama;
	pec_to_miss = miss;

	nameLen = strlen(nm);
	name = new char[nameLen + 1];
	strcpy_s(name, nameLen + 1, nm);

}

com_em::~com_em()
{
	delete[] name;
}

void com_em::heal(int num)
{
	health += num;
}

void com_em::be_attack(int num)
{
	if (num >= health)
		health = 0;
	else
		health -= num;
}