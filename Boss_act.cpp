#include <iostream>
#include <stdlib.h>
#include "total.h"
using namespace std;


void showboss(Boss& boss)
{
	print_();
	cout << "Boss£º" << boss.name << endl;
	cout << "BossÑªÁ¿£º" << boss.health << endl;
	cout << "Boss¹¥»÷£º" << boss.damage;
}

int bossAct(Hero& player, Boss& boss)
{
	srand(time(0));
	int ran = rand() % 10 + 1;
//Attack
	if (boss.is_dama_def == true)
	{
		//Ëé¼×»÷
		if (boss.dama_def == 3)
		{
			player.defence -= boss.damage / 2;
			if (player.defence <= 0)
				player.defence = 0;
			boss.dama_def = 0;
			boss.damadef = true;
		}
		else
			boss.dama_def++;
	}
	if (boss.damadef == false)
	{
		if (0 < ran && ran < 6)
		{
			player.be_attack(boss.damage);
			return 1;
		}
		//Heal
		else if (6 <= ran && ran <= 7)
		{
			boss.heal(boss.health / 20);
			return 2;
		}
		else
		{
			return 4;
		}
	}
	boss.damadef = false;
	return 3;
}

