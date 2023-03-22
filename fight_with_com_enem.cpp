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
		cout << "你取得了胜利！请选择一项升级：\n";
	}
	else if (result1 == -1)
	{
		timep();
		cout << "请选择一项升级：\n";
	}

	cout << "1：血量最大值增加10点。" << endl;
	cout << "2：攻击力增加5。" << endl;
	int levelup1;
	couin(levelup1);

	if (levelup1 == 1)
	{
		player1.health += 10;
		player1.MAX_health += 10;
		cout << "血量增加！";
	}
	else if (levelup1 == 2)
	{
		player1.damage += 5;
		cout << "攻击力提升。";
	}
}