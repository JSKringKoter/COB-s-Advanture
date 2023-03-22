#pragma once
#ifndef COMMON_ENE
#define COMMON_ENE

class com_enem
{
public:
	int health;
	int maxHealth;
	int damage;

	int pec_to_miss;
	int be_damage;
	bool healtime;

	char* name;
	int nameLen;

	com_enem();
	com_enem(int heal, int dama, const char* nm, int miss);
	~com_enem();

	void heal(int num);
	void be_attack(int num);
};
#endif // !COMMON_ENE

