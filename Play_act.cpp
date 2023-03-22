#include <iostream>
#include <stdlib.h>
#include "total.h"
using namespace std;

void showmenu(Hero& player)
{

}


//
//玩家对boss行动
//
int playAct_boss(Hero& player, Boss& boss)
{

	srand(time(0));
	int what_to_go = 0;

	//招架冷却
	
	if (player.zhiEquip == true)
	{
		if (player.is_zhaojia == false && player.a == false)
		{
			player.a = true;
		}
		else if (player.is_zhaojia == false && player.a == true)
		{
			player.a = false;
			player.is_zhaojia = true;
		}
	}


	while (1)
	{
		if (!(cin >> what_to_go))
		{
			cin.clear();
			while (cin.get() != '\n')
				;

			cout << "你下达了错误的命令！" << endl;
			continue;
		}


		//Attack
		if (what_to_go == 1)
		{
			int temp = rand() % 10 + 1;
			int temp_ = rand() % 10 + 1;
			if (0 <= temp_ && temp_ <= boss.pec_to_miss)  //被闪避
			{
				return 10;
			}
			else
			{
				if (0 <= temp && temp <= player.pec_accHit)   //暴击
				{
					boss.be_attack(player.damage * 2);
					boss.be_damage = player.damage * 2;
					player.total_damage += boss.be_damage;
					return 2;
				}
				else
				{
					boss.be_attack(player.damage);
					boss.be_damage = player.damage;
					player.total_damage += boss.be_damage;
					return 1;
				}
			}
		}




		//heal
		else if (what_to_go == 2)
		{
			if (player.healbot == 0)
			{
				cout << "没有血瓶\n";
				continue;
			}
			else
			{
				player.heal(20);
				if (player.health > player.MAX_health)
					player.health = player.MAX_health;
				player.healbot -= 1;
				return 3;
			}
		}




		//defence
		else if (what_to_go == 3)
		{
			if (player.defamm == 0)
			{
				cout << "没有护甲\n";
				continue;
			}
			else
			{
				player.defence_self(3);
				player.defamm -= 1;
				return 4;
			}
		}



		//蓄力攻击
		else if (what_to_go == 4)
		{
			if (player.xuli < 2 && player.zhiEquip == true)
			{
				player.xuli++;
				return 5;
			}
			else if (player.xuli == 2 && player.zhiEquip == true)
			{
				player.xuli = 0;
				boss.be_attack(player.damage * 4);
				boss.be_damage = player.damage * 4;
				player.total_damage += boss.be_damage;
				return 1;
			}
		}

		//再生招架
		else if (what_to_go == 5)
		{

			if (player.is_zhaojia == true && player.zhiEquip == true)
			{
				player.zhaojia = true;
				player.is_zhaojia = false;
				player.a = false;
				return 6;
			}
			else if (player.is_zhaojia == false && player.zhiEquip == true)
			{
				cout << "还未冷却！" << endl;
				continue;
			}
		}
	}
}

//
//玩家对小怪行动
//
int playAct_com_enem(Hero& player, com_enem& enem)
{
	srand(time(0));
	int what_to_go = 0;

	//招架冷却
	if (player.is_zhaojia == false && player.a == false)
	{
		player.a = true;
	}
	else if (player.is_zhaojia == false && player.a == true)
	{
		player.a = false;
		player.is_zhaojia = true;
	}

	while (1)
	{
		if (!(cin >> what_to_go))
		{
			cin.clear();
			while (cin.get() != '\n')
				;

			cout << "你下达了错误的命令！" << endl;
			continue;
		}


		//Attack
		if (what_to_go == 1)
		{
			int temp = rand() % 10 + 1;
			int temp_ = rand() % 10 + 1;
			if (0 <= temp_ && temp_ <= enem.pec_to_miss)  //被闪避
			{
				return 10;
			}
			else
			{
				if (0 <= temp && temp <= player.pec_accHit)   //暴击
				{
					enem.be_attack(player.damage * 2);
					enem.be_damage = player.damage * 2;
					player.total_damage += enem.be_damage;
					return 2;
				}
				else
				{
					enem.be_attack(player.damage);
					enem.be_damage = player.damage;
					player.total_damage += enem.be_damage;
					return 1;
				}
			}
		}




		//heal
		else if (what_to_go == 2)
		{
			if (player.healbot == 0)
			{
				cout << "没有血瓶\n";
				continue;
			}
			else
			{
				player.heal(20);
				if (player.health > player.MAX_health)
					player.health = player.MAX_health;
				player.healbot -= 1;
				return 3;
			}
		}




		//defence
		else if (what_to_go == 3)
		{
			if (player.defamm == 0)
			{
				cout << "没有护甲\n";
				continue;
			}
			else
			{
				player.defence_self(5);
				player.defamm -= 1;
				return 4;
			}
		}


		//蓄力攻击
		else if (what_to_go == 4)
		{
			if (player.xuli < 2 && player.zhiEquip == true)
			{
				player.xuli++;
				return 5;
			}
			else if (player.xuli == 2 && player.zhiEquip == true)
			{
				player.xuli = 0;
				enem.be_attack(player.damage * 4);
				enem.be_damage = player.damage * 4;
				player.total_damage += enem.be_damage;
				return 1;
			}
		}

		//再生招架
		else if (what_to_go == 5)
		{

			if (player.is_zhaojia == true && player.zhiEquip == true)
			{
				player.zhaojia = true;
				player.is_zhaojia = false;
				player.a = false;
				return 6;
			}
			else if (player.is_zhaojia == false && player.zhiEquip == true)
			{
				cout << "还未冷却！" << endl;
				continue;
			}
		}
	}
}