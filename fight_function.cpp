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
		cout << "\n\n��Ļغϣ�����в���:  ";
		pl1 = playAct_boss(player1, KRING);

		timep();
		//��һغ�
		{
			for (int i = 0; i < 5; i++) cout << endl;
			print_();
			//����
			if (pl1 == 1)
				printf("Boss�ܵ��� %d ���˺�!   Bossʣ��Ѫ��:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 2)
				printf("Boss�ܵ��� %d �㱩���˺�!   Bossʣ��Ѫ��:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 10)
				printf("Boss�����˹���!   Bossʣ��Ѫ��:  %d", KRING.health);

			//����
			else if (pl1 == 3)
				printf("���Ƴɹ�, ��ǰѪ��: %d;    ʣ��Ѫƿ: %d", player1.health, player1.healbot);

			//����
			else if (pl1 == 4)
				printf("����ӻ���, ��ǰ����: %d;   ʣ�໤��: %d", player1.defence, player1.defamm);

			//��������
			else if (pl1 == 5)
				cout << "�������������� " << player1.xuli << " �غϣ�";

			//�����м�
			else if (pl1 == 6)
				cout << "�����������мܣ�";
			print_();
		}

		//BOSS�غ�
		{

			timep(1);

			if (KRING.health <= 0)
			{
				cout << "Boss������ȥ��\n";
				timep(2);
			}
			else
			{
				cout << "BOSS�غϣ��ȴ�BOSS����......";
				timep(1);
				bo1 = bossAct(player1, KRING);

				if (bo1 == 1)
				{
					cout << "\nBoss�����˹�����\n";
					timep(1);
					if (player1.be_damage == 0)
						cout << "Bossû�ж�������˺���";
					else
					{
						if (player1.zhaojia == true)
						{
							cout << "�������мܣ�   ����ֵ�ظ�" << player1.be_damage << "�㡣";
							player1.health += 2 * player1.be_damage;
							player1.zhaojia = false;
						}
						else
					     	cout << "Boss���������" << player1.be_damage << "���˺���";
					}
					timep(1);
					cout << "���ʣ��Ѫ����" << player1.health;
				}
				else if (bo1 == 2)
				{
					cout << "\nBoss���������ƣ�     ";
					timep(1);
					cout << "Bossʣ��Ѫ����" << KRING.health;
					if (player1.zhaojia == true)
					{
						player1.zhaojia = false;
						cout << "\n�����м�û�������á�";
					}
				}
				else if (bo1 == 3)
				{
					cout << "\nBoss��������׻���       ";
					timep(1);
					cout << "�����ܵ�" << KRING.damage / 2 << "�����ˡ�";
				}
				else if (bo1 == 4)
				{
					cout << "\nBossû�г��֣���Ҫ�е����ҡ�";
					timep(1);
				}
				print_();
			}
		}

		player1.enter++;

		if (KRING.health <= 0)
		{
			cout << "��սʤ��ħ����\n�������ֵ���� 40 �㡣\n\n";
			player1.health += 40;
			player1.MAX_health += 40;

			//ս������ ��������
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
			cout << "��������ħ����ǰ����Ϸ������\n\n\n\n";
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

		cout << "\n\n��Ļغϣ�����в���:  ";
		pl1 = playAct_com_enem(player1, KRING);

		timep();
		{//��һغ�
			for (int i = 0; i < 5; i++) cout << endl;
			print_();
			//����
			if (pl1 == 1)
				printf("�����ܵ��� %d ���˺�!   ����ʣ��Ѫ��:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 2)
				printf("�����ܵ��� %d �㱩���˺�!   ����ʣ��Ѫ��:  %d", KRING.be_damage, KRING.health);
			else if (pl1 == 10)
				printf("���������˹���!   ����ʣ��Ѫ��:  %d", KRING.health);

			//����
			else if (pl1 == 3)
				printf("���Ƴɹ�, ��ǰѪ��: %d;    ʣ��Ѫƿ: %d", player1.health, player1.healbot);

			//����
			else if (pl1 == 4)
				printf("����ӻ���, ��ǰ����: %d;   ʣ�໤��: %d", player1.defence, player1.defamm);

			//��������
			else if (pl1 == 5)
				cout << "�������������� " << player1.xuli << " �غϣ�";

			//�����м�
			else if (pl1 == 6)
				cout << "�����������мܣ�";
			print_();
		}


		{//���˻غ�

			timep(1);
			


			if (KRING.health <= 0)
			{
				cout << "�����ѻ�ɱ��\n";
				timep(2);
			}
			else
			{
				cout << "�з��غϣ��ȴ����˳���......";
				timep(1);
				bo1 = enermyAct(player1, KRING);

				if (bo1 == 1)
				{
					cout << "\n���˽����˹�����\n";
					timep(1);
					if (player1.be_damage == 0)
						cout << "����û�ж�������˺���";
					else
					{
						if (player1.zhaojia == true)
						{
							cout << "�������мܣ�   ����ֵ�ظ�" << player1.be_damage << "�㡣";
							player1.heal(2 * player1.be_damage);
							player1.zhaojia = false;
						}
						else
							cout << "���˶��������" << player1.be_damage << "���˺���";
					}
					timep(1);
					cout << "���ʣ��Ѫ����" << player1.health;
				}
				else if (bo1 == 2)
				{
					if (KRING.healtime == false)
					{
						KRING.healtime = 1;
						cout << "\n��������׼�����ƣ�     ";
						timep(1);
					}
					else if (KRING.healtime == true)
					{
						KRING.healtime = 0;
						cout << "\n���˽��������ƣ�     ";
						timep(1);
						cout << "����ʣ��Ѫ����" << KRING.health;
					}
					if (player1.zhaojia == true)
					{
						player1.zhaojia = false;
						cout << "\n�����м�û�������á�";
					}
				}
				print_();
			}
		}

		player1.enter++;

		if (KRING.health <= 0)
		{
			cout << "��սʤ�˵��ˣ�\n����ֵ�ѻָ� 20 �㡣\n\n";
			player1.health += 20;
			if (player1.health > player1.MAX_health)
				player1.health = player1.MAX_health;
			//ս������ ��������
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
			cout << "�������˵�����ǰ�����ѽ��\n\n\n\n";
			system("pause");
			return 0;
		}
		getHealBot(player1);
		getAmmo(player1);
	}

}