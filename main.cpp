#include <iostream>
#include <stdlib.h>
#include <ctime>
#include "total.h"

using namespace std;
void tital2();


int main()
{

//��ʾ�������
	int tita = tital();
	int DIY_heal, DIY_dam, DIY_def, DIY_healbot, DIY_defamm;
	DIY_heal = 100;
	DIY_dam = 10;
	DIY_def = 10;
	if (tita == 1)
	{
		cout << "��ʼ��ͨģʽ��\n\n";
		timep(1);
	}
	else if (tita == 2)
	{
		cout << "��ʼ�Զ�ģʽ��\n\n";
		timep(1);
		cout << "�����������ֵ��";
		cin >> DIY_heal;
		cout << "������ҹ�������";
		cin >> DIY_dam;
		cout << "������һ���ֵ��";
		cin >> DIY_def;
		cin.get();
	}
	else if (tita == 3)
	{
		cout << "��Ϸ�˳���\n\n\n\n";
		system("pause");
		return 0;
	}

	bool has_played = filer();

	timep(1);
	if (has_played == true) {
		print_(16);
		cout << "| �Ƿ��������飿| 1. ��  2. �� |";
		print_(16);
	}
	else {
		print_(32);
		cout << "|��һ����ɣ�����ղ�ѡ��ģʽһ�����������ּӻس��Ϳ����ж��ˡ�|";
		cout << endl;
		cout << "|׼�����˾Ͱ��»س��ɣ���Ȼ��Ҳ����˵�仰��                    |";
		print_(32);
		cout << endl;
	}
	
	timep(1);
	int isSkip = 0;
	if (has_played == true) {
		while (!(cin >> isSkip) || !(isSkip <= 2 && 1 <= isSkip)) {
			cin.clear();
			eatline();
			cout << "������1��2�е�����: ";
		}
	}
	eatline();

	//��1_1�ι���
	{
		if (isSkip == 2) 
			showstory1_1();
	}

	char playerName[30];
	cout << "������֣�";
	cin.getline(playerName, 30);
	Hero player1(DIY_heal, DIY_dam, DIY_def, playerName);
	Boss KRING(80, 15, "???", 2, false);

	//��1_2�ι���
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
		cout << "�㶼����������һ���ǵ���ʲôѡ��ɡ�\n";
		cout << "ѡ�ɣ�";
		couin(godEquip1);
	}
	if (godEquip1 == 1)
	{
		player1.damage += 20;
		player1.pec_accHit += 3;
		player1.godEquip = 1;
		cout << "\n������Ϲ�֮����";
	}
	else if (godEquip1 == 2)
	{
		player1.defence += 10;
		player1.is_dama_def = false;
		player1.godEquip = 2;
		cout << "\n����˱���֮�ܣ�";
	}
	else if (godEquip1 == 3)
	{
		player1.healbot_if = true;
		player1.godEquip = 3;
		player1.MAX_health += 100;
		player1.health += 100;
		cout << "\n���������֮ˮ��";
	}

	//��2_2�ι���
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_2();
		}
	}

	fight_com1(player1, 1);

	//��2�ι��²���
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_0();
		}
	}   
	player1.zhiEquip = true;
	player1.is_zhaojia = true;

    //��2_3�ι���
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory2_3();
		}
	}      

	fight_com1(player1, 2);

	//��2_4�ι���
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

	//��3_1�ι���
	{
		timep(1);
		{
			if (isSkip == 2)
				showstory3_1();
		}
	}
	
	fight_com1(player1, 3);

	//��4_1�ι���
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
		cout << "��";
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