#include <iostream>
#include "total.h"
using namespace std;

int fight_com1(Hero& player1, int i)
{
	int result1;
	switch (i)
	{
	case 1:
		result1 = common_enermy_meet1(player1); 
		break;
	case 2:
		result1 = common_enermy_meet2(player1);
		break;
	case 3:
		result1 = common_enermy_meet3(player1);
		break;
	}
	if (result1 == 0)
		return 0;
	else if (result1 == 1)
	{
		timep();
		cout << "��ȡ����ʤ������ѡ��һ��������\n";
	}
	else if (result1 == -1)
	{
		timep();
		cout << "��ѡ��һ��������\n";
	}

	cout << "1��Ѫ�����ֵ����10�㡣" << endl;
	cout << "2������������5��" << endl;
	int levelup1;
	couin(levelup1);

	if (levelup1 == 1)
	{
		player1.health += 10;
		player1.MAX_health += 10;
		cout << "Ѫ�����ӣ�";
	}
	else if (levelup1 == 2)
	{
		player1.damage += 5;
		cout << "������������";
	}
}