#include <iostream>
#include "total.h"
using namespace std;


Boss::Boss(int heal, int dama, const char* nm, int miss, bool is_def)
{
	health = maxHealth= heal;
	damage = dama;
	pec_to_miss = miss;
	be_damage = 0;
	is_dama_def = is_def;
	dama_def = 0;
	damadef = 0;

	nameLen = strlen(nm);
	name = new char[nameLen + 1];
	strcpy_s(name, nameLen + 1, nm);

}

Boss::~Boss()
{
	delete[] name;
}

void Boss::heal(int num)
{
	health += num;
}

void Boss::be_attack(int num)
{
	if (num >= health)
		health = 0;
	else
		health -= num;
}
