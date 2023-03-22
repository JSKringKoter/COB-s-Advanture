#include <iostream>
#include "total.h"
using namespace std;

Hero::Hero() { health = damage = defence = healbot = pec_accHit = 0; }

Hero::Hero(int heal, int dama, int def, const char* nm)
{
	health = MAX_health = heal;
	damage = dama;
	defence = def;
	healbot = defamm = 1;

	be_damage = 0;

	total_be_att = total_damage = enter = 0;

	pec_accHit = 2;
	is_dama_def = true;
	healbot_if = false;
	godEquip = 0;
	zhiEquip = false;
	xuli = 0;
	zhaojia = false;
	a = false;

	nameLen = strlen(nm);
	name = new char[nameLen + 1];
	strcpy_s(name, nameLen + 1, nm);
}


Hero::~Hero()
{
	delete[] name;
}

void Hero::heal(int num)
{
	health += num;
	if (health > MAX_health)
		health = MAX_health;
}

int Hero::be_attack(int num)
{
	if (num >= health + defence)
	{
		health = 0;
		be_damage = num;

		total_be_att += be_damage;
		return 0;
	}
	else
	{
		if (num > defence)
		{
			health -= num - defence;
			be_damage = num - defence;
			if (defence > 0 && is_dama_def == true)
				defence--;
		}
		else
		{
			be_damage = 0;
			if (defence > 0 && is_dama_def == true)
			defence--;
		}
		total_be_att += be_damage;
		return 1;
	}
}

void Hero::defence_self(int num)
{
	defence += num;
}