#pragma once
#ifndef COB_HEAD
#define COB_HEAD
#include <iostream>
#include "total.h"
using namespace std;

class Hero
{
public:
	int MAX_health;
	int health;
	int damage;
	int defence;
	int be_damage;

	int total_damage;
	int total_be_att;
	int enter;


	int healbot;
	int defamm;

	int pec_accHit;
	int godEquip;
	bool zhiEquip;
	bool is_dama_def;
	bool healbot_if;
	bool a;

	int xuli;
	bool is_zhaojia;
	bool zhaojia;

	char* name;
	int nameLen;

	Hero();
	Hero(int health_, int dama_, int defen_, const char* nm);
	~Hero();

	void heal(int num);
    int be_attack(int num);
	void defence_self(int num);
};

#endif // !1

