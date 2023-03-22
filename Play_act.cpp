#include <iostream>
#include <stdlib.h>
#include "total.h"
using namespace std;

void showmenu(Hero& player)
{

}


//
//��Ҷ�boss�ж�
//
int playAct_boss(Hero& player, Boss& boss)
{

	srand(time(0));
	int what_to_go = 0;

	//�м���ȴ
	
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

			cout << "���´��˴�������" << endl;
			continue;
		}


		//Attack
		if (what_to_go == 1)
		{
			int temp = rand() % 10 + 1;
			int temp_ = rand() % 10 + 1;
			if (0 <= temp_ && temp_ <= boss.pec_to_miss)  //������
			{
				return 10;
			}
			else
			{
				if (0 <= temp && temp <= player.pec_accHit)   //����
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
				cout << "û��Ѫƿ\n";
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
				cout << "û�л���\n";
				continue;
			}
			else
			{
				player.defence_self(3);
				player.defamm -= 1;
				return 4;
			}
		}



		//��������
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

		//�����м�
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
				cout << "��δ��ȴ��" << endl;
				continue;
			}
		}
	}
}

//
//��Ҷ�С���ж�
//
int playAct_com_enem(Hero& player, com_enem& enem)
{
	srand(time(0));
	int what_to_go = 0;

	//�м���ȴ
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

			cout << "���´��˴�������" << endl;
			continue;
		}


		//Attack
		if (what_to_go == 1)
		{
			int temp = rand() % 10 + 1;
			int temp_ = rand() % 10 + 1;
			if (0 <= temp_ && temp_ <= enem.pec_to_miss)  //������
			{
				return 10;
			}
			else
			{
				if (0 <= temp && temp <= player.pec_accHit)   //����
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
				cout << "û��Ѫƿ\n";
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
				cout << "û�л���\n";
				continue;
			}
			else
			{
				player.defence_self(5);
				player.defamm -= 1;
				return 4;
			}
		}


		//��������
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

		//�����м�
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
				cout << "��δ��ȴ��" << endl;
				continue;
			}
		}
	}
}