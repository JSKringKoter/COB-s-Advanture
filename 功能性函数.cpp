#include <iostream>
#include "total.h"
using namespace std;

void couin(int& a)
{
	while (!(cin >> a))
	{
		cin.clear();
		cin.get();
		continue;
	}
	cin.get();
}

void showIf(const Hero& player, const Boss& boss)
{
	int nowBitMax = (double) player.health / player.MAX_health * 10;
	print_();
	cout << "�������" << player.name << endl;
	//��ʾ����ֵ
	cout << "���� " << player.health;
	cout << "   \t|";
	for (int i = 0; i < nowBitMax - 1; i++) cout << "����";
	for (int i = 0; i < 20 - 2 * nowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << player.MAX_health;
	cout << endl;

	//��ʾ����ֵ
	int showDefence = player.defence / 7;
	cout << "���� " << player.defence;
	cout << "    \t|";
	if (showDefence > 9)
		showDefence = 9;
	for (int i = 0; i < showDefence; i++) cout << "����";
	cout << endl;

	//��ʾ������
	int showAttack = player.damage / 10;
	cout << "���� " << player.damage;
	cout << "    \t|";
	if (showAttack > 9)
		showAttack = 9;
	for (int i = 0; i < showAttack; i++) cout << "����";
	cout << endl;

	//��ʾѪƿ������Ƭ
	if (player.healbot_if == true) {
		cout << "Ѫƿ ��     \t|����";
	}
	else {
		cout << "Ѫƿ " << player.healbot;
		cout << "     \t|";
		for (int i = 0; i < player.healbot; i++) cout << "��";
		for (int i = 0; i < 5 - player.healbot; i++) cout << " ";
		cout << "| Max 5";
	}

	cout << endl;
	cout << "����Ƭ " << player.defamm;
	cout << "   \t|";
	for (int i = 0; i < player.defamm; i++) cout << "��";
	for (int i = 0; i < 5 - player.defamm; i++) cout << " ";
	cout << "| Max 5";
	cout << endl;

	//��ʾ�Ϲ�����
	switch (player.godEquip)
	{
	case 1:
		cout << "�Ϲ��������Ϲ�֮��\n";
		break;
	case 2:
		cout << "�Ϲ�����������֮�� \n";
		break;
	case 3:
		cout << "�Ϲ�����������֮ˮ\n";
		break;
	}

	//��ʾbossѪ��
	cout << endl;
	int bossnowBitMax = (double) boss.health / boss.maxHealth * 10;
	cout << "BOSS: " << boss.name << endl;;
	cout << "���� " << boss.health;
	cout << "   \t|";
	for (int i = 0; i < bossnowBitMax - 1; i++) cout << "����";
	for (int i = 0; i < 20 - 2 * bossnowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << boss.maxHealth;
	cout << endl;

	//��ʾ�ж�
	for (int i = 0; i < 17; i++)
		cout << "��";
	cout << endl;

	cout << "1:����  " << "2:����  " << "3:���ӻ���";

	if (player.zhiEquip == true)
	{
		cout << "\n4.�������� ������������" << player.xuli << "��\n";
		cout << "5.�����м�\n";
	}
}

void showIf(const Hero& player, const com_enem& boss)
{
	int nowBitMax = (double)player.health / player.MAX_health * 10;
	print_();
	cout << "�������" << player.name << endl;
	//��ʾ����ֵ
	cout << "���� " << player.health;
	cout << "   \t|";
	for (int i = 0; i < nowBitMax - 1; i++) cout << "����";
	for (int i = 0; i < 20 - 2 * nowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << player.MAX_health;
	cout << endl;

	//��ʾ����ֵ
	int showDefence = player.defence / 7;
	cout << "���� " << player.defence;
	cout << "    \t|";
	if (showDefence > 9)
		showDefence = 9;
	for (int i = 0; i < showDefence; i++) cout << "����";
	cout << endl;

	//��ʾ������
	int showAttack = player.damage / 10;
	cout << "���� " << player.damage;
	cout << "    \t|";
	if (showAttack > 9)
		showAttack = 9;
	for (int i = 0; i < showAttack; i++) cout << "����";
	cout << endl;

	//��ʾѪƿ������Ƭ
	if (player.healbot_if == true) {
		cout << "Ѫƿ ��     \t|����";
	}
	else {
		cout << "Ѫƿ " << player.healbot;
		cout << "     \t|";
		for (int i = 0; i < player.healbot; i++) cout << "��";
		for (int i = 0; i < 5 - player.healbot; i++) cout << " ";
		cout << "| Max 5";
	}

	cout << endl;
	cout << "����Ƭ " << player.defamm;
	cout << "   \t|";
	for (int i = 0; i < player.defamm; i++) cout << "��";
	for (int i = 0; i < 5 - player.defamm; i++) cout << " ";
	cout << "| Max 5";
	cout << endl;

	//��ʾ�Ϲ�����
	switch (player.godEquip)
	{
	case 1:
		cout << "�Ϲ��������Ϲ�֮��\n";
		break;
	case 2:
		cout << "�Ϲ�����������֮�� \n";
		break;
	case 3:
		cout << "�Ϲ�����������֮ˮ\n";
		break;
	}

	//��ʾ����Ѫ�� �����boss����com_enem
	cout << endl;
	int bossnowBitMax = (double)boss.health / boss.maxHealth * 10;
	cout << "����: " << boss.name << endl;;
	cout << "���� " << boss.health;
	cout << "   \t|";
	for (int i = 0; i < bossnowBitMax - 1; i++) cout << "����";
	for (int i = 0; i < 20 - 2 * bossnowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << boss.maxHealth;
	cout << endl;

	//��ʾ�ж�
	for (int i = 0; i < 17; i++)
		cout << "��";
	cout << endl;

	cout << "1:����  " << "2:����  " << "3:���ӻ���";

	if (player.zhiEquip == true)
	{
		cout << "\n4.�������� ������������" << player.xuli << "��\n";
		cout << "5.�����м�\n";
	}
}