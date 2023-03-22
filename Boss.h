#pragma once
#ifndef BOSS_
#define BOSS_
#include <iostream>
#include "total.h"
using namespace std;

class Boss
{
public:
	int health;
	int maxHealth;
	int damage;

	int pec_to_miss;
	int be_damage;
	bool is_dama_def;
	int dama_def;
	int damadef;

	char* name;
	int nameLen;

	Boss(int health_, int dama_, const char* nm, int pec, bool is_def);
	~Boss();

	void heal(int num);
	void be_attack(int num);
};


#endif // !BOSS_

