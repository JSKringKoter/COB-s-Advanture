#include <iostream>
#include "total.h"
using namespace std;


int fight_Boss(Hero& player1, Boss& KRING)
{
	int pl1, bo1;
	while (1)
	{
		timep(1);
		showIf(player1, KRING);
		cout << "\n\n你的回合，请进行操作:  ";
		pl1 = playAct_boss(player1, KRING);

		timep();
		//玩家回合
		{
			for (int i = 0; i < 5; i++) cout << endl;
			print_();
			//攻击
			if (pl1 == 1)
				printf("Boss受到了 %d 点伤害!   Boss剩余血量:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 2)
				printf("Boss受到了 %d 点暴击伤害!   Boss剩余血量:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 10)
				printf("Boss闪避了攻击!   Boss剩余血量:  %d", KRING.health);

			//治疗
			else if (pl1 == 3)
				printf("治疗成功, 当前血量: %d;    剩余血瓶: %d", player1.health, player1.healbot);

			//防御
			else if (pl1 == 4)
				printf("已添加护甲, 当前护甲: %d;   剩余护甲: %d", player1.defence, player1.defamm);

			//蓄力攻击
			else if (pl1 == 5)
				cout << "正在蓄力……第 " << player1.xuli << " 回合！";

			//再生招架
			else if (pl1 == 6)
				cout << "发动了再生招架！";
			print_();
		}

		//BOSS回合
		{

			timep(1);

			if (KRING.health <= 0)
			{
				cout << "Boss倒了下去。\n";
				timep(2);
			}
			else
			{
				cout << "BOSS回合！等待BOSS出招......";
				timep(1);
				bo1 = bossAct(player1, KRING);

				if (bo1 == 1)
				{
					cout << "\nBoss进行了攻击！\n";
					timep(1);
					if (player1.be_damage == 0)
						cout << "Boss没有对你造成伤害。";
					else
					{
						if (player1.zhaojia == true)
						{
							cout << "攻击被招架！   生命值回复" << player1.be_damage << "点。";
							player1.health += 2 * player1.be_damage;
							player1.zhaojia = false;
						}
						else
					     	cout << "Boss对你造成了" << player1.be_damage << "点伤害。";
					}
					timep(1);
					cout << "你的剩余血量：" << player1.health;
				}
				else if (bo1 == 2)
				{
					cout << "\nBoss进行了治疗！     ";
					timep(1);
					cout << "Boss剩余血量：" << KRING.health;
					if (player1.zhaojia == true)
					{
						player1.zhaojia = false;
						cout << "\n再生招架没有起作用。";
					}
				}
				else if (bo1 == 3)
				{
					cout << "\nBoss发动了碎甲击！       ";
					timep(1);
					cout << "护甲受到" << KRING.damage / 2 << "点损伤。";
				}
				else if (bo1 == 4)
				{
					cout << "\nBoss没有出手，你要感到庆幸。";
					timep(1);
				}
				print_();
			}
		}

		player1.enter++;

		if (KRING.health <= 0)
		{
			cout << "你战胜了魔王！\n最大生命值提升 40 点。\n\n";
			player1.health += 40;
			player1.MAX_health += 40;

			//战斗结束 重置数据
			if (player1.zhiEquip == true)
			{
				player1.zhaojia = false;
				player1.is_zhaojia = true;
				player1.a = false;
				player1.xuli = 0;
				KRING.damadef = 0;
			}
			return 1;
		}
		else if (player1.health <= 0)
		{
			cout << "你死在了魔王面前，游戏结束。\n\n\n\n";
			system("pause");
			return 0;
		}
		getHealBot(player1);
		getAmmo(player1);
	}
	
}



int fight_enem(Hero& player1, com_enem& KRING)
{
	int pl1, bo1;
	while (1)
	{
		timep(1);
		showIf(player1, KRING);

		cout << "\n\n你的回合，请进行操作:  ";
		pl1 = playAct_com_enem(player1, KRING);

		timep();
		{//玩家回合
			for (int i = 0; i < 5; i++) cout << endl;
			print_();
			//攻击
			if (pl1 == 1)
				printf("敌人受到了 %d 点伤害!   敌人剩余血量:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 2)
				printf("敌人受到了 %d 点暴击伤害!   敌人剩余血量:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 10)
				printf("敌人闪避了攻击!   敌人剩余血量:  %d", KRING.health);

			//治疗
			else if (pl1 == 3)
				printf("治疗成功, 当前血量: %d;    剩余血瓶: %d", player1.health, player1.healbot);

			//防御
			else if (pl1 == 4)
				printf("已添加护甲, 当前护甲: %d;   剩余护甲: %d", player1.defence, player1.defamm);

			//蓄力攻击
			else if (pl1 == 5)
				cout << "正在蓄力……第 " << player1.xuli << " 回合！";

			//再生招架
			else if (pl1 == 6)
				cout << "发动了再生招架！";
			print_();
		}


		{//敌人回合

			timep(1);
			


			if (KRING.health <= 0)
			{
				cout << "敌人已击杀。\n";
				timep(2);
			}
			else
			{
				cout << "敌方回合！等待敌人出招......";
				timep(1);
				bo1 = enermyAct(player1, KRING);

				if (bo1 == 1)
				{
					cout << "\n敌人进行了攻击！\n";
					timep(1);
					if (player1.be_damage == 0)
						cout << "敌人没有对你造成伤害。";
					else
					{
						if (player1.zhaojia == true)
						{
							cout << "攻击被招架！   生命值回复" << player1.be_damage << "点。";
							player1.heal(2 * player1.be_damage);
							player1.zhaojia = false;
						}
						else
							cout << "敌人对你造成了" << player1.be_damage << "点伤害。";
					}
					timep(1);
					cout << "你的剩余血量：" << player1.health;
				}
				else if (bo1 == 2)
				{
					if (KRING.healtime == false)
					{
						KRING.healtime = 1;
						cout << "\n敌人正在准备治疗！     ";
						timep(1);
					}
					else if (KRING.healtime == true)
					{
						KRING.healtime = 0;
						cout << "\n敌人进行了治疗！     ";
						timep(1);
						cout << "敌人剩余血量：" << KRING.health;
					}
					if (player1.zhaojia == true)
					{
						player1.zhaojia = false;
						cout << "\n再生招架没有起作用。";
					}
				}
				print_();
			}
		}

		player1.enter++;

		if (KRING.health <= 0)
		{
			cout << "你战胜了敌人！\n生命值已恢复 20 点。\n\n";
			player1.health += 20;
			if (player1.health > player1.MAX_health)
				player1.health = player1.MAX_health;
			//战斗结束 重置数据
			KRING.healtime = false;
			if (player1.zhiEquip == true)
			{
				player1.zhaojia = false;
				player1.is_zhaojia = true;
				player1.a = false;
				player1.xuli = 0;
			}
			return 1;
		}
		else if (player1.health <= 0)
		{
			cout << "你死在了敌人面前，真蔡呀。\n\n\n\n";
			system("pause");
			return 0;
		}
		getHealBot(player1);
		getAmmo(player1);
	}

}