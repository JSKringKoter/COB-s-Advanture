#include <iostream>
#include <stdlib.h>
#include "total.h"
using namespace std;


void getHealBot(Hero& player)
{
	srand(time(0));
	int temp = rand() % 10 + 1;
	if (player.healbot >= 5)
		cout << "Ѫƿ������" << endl;
	else	if (0 <= temp && temp <= 2)
		{
			player.healbot++;
			cout << "�����Ѫƿ��\n";
		}
}

void getAmmo(Hero& player)
{
	srand(time(0));
	int temp = rand() % 10 + 1;
	if (player.defamm >= 5)
		cout << "����Ƭ������" << endl;
	else if (0 <= temp && temp <= 3)
	{
		player.defamm++;
		cout << "����˻���Ƭ��\n";
	}
}