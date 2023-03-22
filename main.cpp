#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "total.h"

using namespace std;
void tital2();


int main()
{

//显示标题界面
	int tita = tital();
	int DIY_heal, DIY_dam, DIY_def, DIY_healbot, DIY_defamm;
	DIY_heal = 100;
	DIY_dam = 10;
	DIY_def = 10;
	if (tita == 1)
	{
		cout << "开始普通模式。\n\n";
		timep(1);
	}
	else if (tita == 2)
	{
		cout << "开始自定模式。\n\n";
		timep(1);
		cout << "输入玩家生命值：";
		cin >> DIY_heal;
		cout << "输入玩家攻击力：";
		cin >> DIY_dam;
		cout << "输入玩家护甲值：";
		cin >> DIY_def;
		cin.get();
	}
	else if (tita == 3)
	{
		cout << "游戏退出。\n\n\n\n";
		system("pause");
		return 0;
	}

	bool has_played = filer();

	timep(1);
	if (has_played == true) {
		print_(16);
		cout << "| 是否跳过剧情？| 1. 是  2. 否 |";
		print_(16);
	}
	else {
		print_(32);
		cout << "|第一次玩吧，就像刚才选择模式一样，输入数字加回车就可以行动了。|";
		cout << endl;
		cout << "|准备好了就按下回车吧，当然你也可以说句话。                    |";
		print_(32);
		cout << endl;
	}
	
	timep(1);
	int isSkip = 0;
	if (has_played == true) {
		while (!(cin >> isSkip) || !(isSkip <= 2 && 1 <= isSkip)) {
			cin.clear();
			eatline();
			cout << "请输入1和2中的数字: ";
		}
	}
	eatline();

	//第1_1段故事
	{
		if (isSkip == 2) 
			showstory1_1();
	}

	char playerName[30];
	cout << "你的名字：";
	cin.getline(playerName, 30);
	Hero player1(DIY_heal, DIY_dam, DIY_def, playerName);
	Boss KRING(80, 15, "???", 2, false);

	//第1_2段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory1_2(player1);
		}
		timep(0.5);
	}

	showboss(KRING);
	if (fight_Boss(player1, KRING) == 0)
		return 0;
	cin.get();

	timep(1);
	int godEquip1;
	if (isSkip == 2) {
		godEquip1 = showstory2_1();
	}
	else {
		cin.get();
		cout << "你都跳剧情了你一定记得有什么选择吧。\n";
		cout << "选吧：";
		couin(godEquip1);
	}
	if (godEquip1 == 1)
	{
		player1.damage += 20;
		player1.pec_accHit += 3;
		player1.godEquip = 1;
		cout << "\n获得了上古之剑！";
	}
	else if (godEquip1 == 2)
	{
		player1.defence += 10;
		player1.is_dama_def = false;
		player1.godEquip = 2;
		cout << "\n获得了壁垒之盾！";
	}
	else if (godEquip1 == 3)
	{
		player1.healbot_if = true;
		player1.godEquip = 3;
		player1.MAX_health += 100;
		player1.health += 100;
		cout << "\n获得了生命之水！";
	}

	//第2_2段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_2();
		}
	}

	fight_com1(player1, 1);

	//第2段故事插入
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_0();
		}
	}   
	player1.zhiEquip = true;
	player1.is_zhaojia = true;

    //第2_3段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_3();
		}
	}      

	fight_com1(player1, 2);

	//第2_4段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_4();
		}
	}      

	Boss God(200, 20, "Godspeed", 2, true);
	showboss(God);
	if (fight_Boss(player1, God) == 0)
		return 0;
	eatline();

	//第3_1段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory3_1();
		}
	}
	
	fight_com1(player1, 3);

	//第4_1段故事
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory4_1();
		}
	}

	player1.MAX_health = player1.MAX_health / 3;
	if (player1.health > player1.MAX_health)
		player1.health = player1.MAX_health;
	player1.damage += 10;
	player1.pec_accHit += 2;

	Boss After(400, 30, "Afternoon Tea", 3, true);
	showboss(After);
	if (fight_Boss(player1, After) == 0)
		return 0;
	eatline();

	showstory4_2();
	if (has_played == false)
	{
		showstory_End();
		filew(player1);
		return 0;
	}
	else if (has_played == true)
		showstory5_1();

	filew(player1);

	tital2();
	system("pause");
	system("pause");
	return 0;
}






void print_(int n)
{
	cout << endl;
	for (int i = 0; i < n; i++)
		cout << "—";
	cout << endl;
}

void timep(int n)
{
	clock_t start = clock();
	clock_t end = n * CLOCKS_PER_SEC;
	while (clock() - start < end)
		;
}

void eatline()
{
	while (cin.get() != '\n')
		;
}

void tital2()
{
	cout << "  *****   ******  ********" << endl;
	timep();
	cout << " *       *      *  *      *" << endl;
	timep();
	cout << " *       *      *  *      *" << endl;
	timep();
	cout << " *       *    ************" << endl;
	timep();
	cout << " *       *      *  *      *" << endl;
	timep();
	cout << " *       *      *  *      *" << endl;
	timep();
	cout << "  *****   ******  ********" << "  's Advanture                                     ";
	timep(2);
	cout << "# End #" << endl << endl;
	cout << "                                                                    \n\n\n";
}