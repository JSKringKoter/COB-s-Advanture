#include <fstream>
#include <iostream>
#include "total.h"

void filew(Hero& player)
{
	fstream fout("playrecord.txt",
	                   	ios_base::out | ios_base::app);
	if (!fout.is_open())
	{
		exit(1);
	}
	else
	{
		for (int i = 0; i < 17; i++)
			fout << "—";
		fout << endl << "  " << "玩家名：" << player.name << "       \t";
		fout << endl << "  " << "生命值：" << player.health << "            \t";
		fout << endl << "  " << "护甲值：" << player.defence << "             \t";
		fout << endl << "  " << "攻击力：" << player.damage << "             \t";

		switch (player.godEquip)
		{
		case 1:
			fout << endl << "  " << "上古神器：上古之剑          \t";
			break;
		case 2:
			fout << endl << "  " << "上古神器：壁垒之盾          \t";
			break;
		case 3:
			fout << endl << "  " << "上古神器：生命之水          \t";
			break;
		}
		fout << endl;
		for (int i = 0; i < 10; i++)
			fout << "—";

		fout << "\n  造成伤害总计：" << player.total_damage << endl;
		fout << "  受到伤害总计：" << player.total_be_att << endl;
		fout << "  总回合数：" << player.enter << endl;

		for (int i = 0; i < 17; i++)
			fout << "—";

		fout <<  endl << endl << endl << endl;
	}
	fout.close();

}

bool filer()
{
	ifstream fin("playrecord.txt", ios_base::in);
	if (!fin.is_open())
		return false;
	else
		return true;
}