#include <iostream>
#include <stdlib.h>
#include "total.h"
using namespace std;

void showenem(com_enem& enem)
{
	print_();
	cout << "���ˣ�" << enem.name << endl;
	cout << "����Ѫ����" << enem.health << endl;
	cout << "���˹�����" << enem.damage;
}

int enermyAct(Hero& player, com_enem& enem)
{
	srand(time(0));
	int ran = rand() % 10 + 1;

	//Attack
	if (0 < ran && ran < 9)
	{
		player.be_attack(enem.damage);
		return 1;
	}
	//Heal
	else
	{
		enem.heal(enem.health / 10);
		return 2;
	}
}