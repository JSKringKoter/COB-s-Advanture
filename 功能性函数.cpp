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
	cout << "你叫作：" << player.name << endl;
	//显示生命值
	cout << "生命 " << player.health;
	cout << "   \t|";
	for (int i = 0; i < nowBitMax - 1; i++) cout << "██";
	for (int i = 0; i < 20 - 2 * nowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << player.MAX_health;
	cout << endl;

	//显示护甲值
	int showDefence = player.defence / 7;
	cout << "护甲 " << player.defence;
	cout << "    \t|";
	if (showDefence > 9)
		showDefence = 9;
	for (int i = 0; i < showDefence; i++) cout << "██";
	cout << endl;

	//显示攻击力
	int showAttack = player.damage / 10;
	cout << "攻击 " << player.damage;
	cout << "    \t|";
	if (showAttack > 9)
		showAttack = 9;
	for (int i = 0; i < showAttack; i++) cout << "██";
	cout << endl;

	//显示血瓶及护甲片
	if (player.healbot_if == true) {
		cout << "血瓶 ∞     \t|无限";
	}
	else {
		cout << "血瓶 " << player.healbot;
		cout << "     \t|";
		for (int i = 0; i < player.healbot; i++) cout << "█";
		for (int i = 0; i < 5 - player.healbot; i++) cout << " ";
		cout << "| Max 5";
	}

	cout << endl;
	cout << "护甲片 " << player.defamm;
	cout << "   \t|";
	for (int i = 0; i < player.defamm; i++) cout << "█";
	for (int i = 0; i < 5 - player.defamm; i++) cout << " ";
	cout << "| Max 5";
	cout << endl;

	//显示上古神器
	switch (player.godEquip)
	{
	case 1:
		cout << "上古神器：上古之剑\n";
		break;
	case 2:
		cout << "上古神器：壁垒之盾 \n";
		break;
	case 3:
		cout << "上古神器：生命之水\n";
		break;
	}

	//显示boss血量
	cout << endl;
	int bossnowBitMax = (double) boss.health / boss.maxHealth * 10;
	cout << "BOSS: " << boss.name << endl;;
	cout << "生命 " << boss.health;
	cout << "   \t|";
	for (int i = 0; i < bossnowBitMax - 1; i++) cout << "██";
	for (int i = 0; i < 20 - 2 * bossnowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << boss.maxHealth;
	cout << endl;

	//显示行动
	for (int i = 0; i < 17; i++)
		cout << "—";
	cout << endl;

	cout << "1:攻击  " << "2:治疗  " << "3:增加护甲";

	if (player.zhiEquip == true)
	{
		cout << "\n4.蓄力攻击 （蓄力层数：" << player.xuli << "）\n";
		cout << "5.再生招架\n";
	}
}

void showIf(const Hero& player, const com_enem& boss)
{
	int nowBitMax = (double)player.health / player.MAX_health * 10;
	print_();
	cout << "你叫作：" << player.name << endl;
	//显示生命值
	cout << "生命 " << player.health;
	cout << "   \t|";
	for (int i = 0; i < nowBitMax - 1; i++) cout << "██";
	for (int i = 0; i < 20 - 2 * nowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << player.MAX_health;
	cout << endl;

	//显示护甲值
	int showDefence = player.defence / 7;
	cout << "护甲 " << player.defence;
	cout << "    \t|";
	if (showDefence > 9)
		showDefence = 9;
	for (int i = 0; i < showDefence; i++) cout << "██";
	cout << endl;

	//显示攻击力
	int showAttack = player.damage / 10;
	cout << "攻击 " << player.damage;
	cout << "    \t|";
	if (showAttack > 9)
		showAttack = 9;
	for (int i = 0; i < showAttack; i++) cout << "██";
	cout << endl;

	//显示血瓶及护甲片
	if (player.healbot_if == true) {
		cout << "血瓶 ∞     \t|无限";
	}
	else {
		cout << "血瓶 " << player.healbot;
		cout << "     \t|";
		for (int i = 0; i < player.healbot; i++) cout << "█";
		for (int i = 0; i < 5 - player.healbot; i++) cout << " ";
		cout << "| Max 5";
	}

	cout << endl;
	cout << "护甲片 " << player.defamm;
	cout << "   \t|";
	for (int i = 0; i < player.defamm; i++) cout << "█";
	for (int i = 0; i < 5 - player.defamm; i++) cout << " ";
	cout << "| Max 5";
	cout << endl;

	//显示上古神器
	switch (player.godEquip)
	{
	case 1:
		cout << "上古神器：上古之剑\n";
		break;
	case 2:
		cout << "上古神器：壁垒之盾 \n";
		break;
	case 3:
		cout << "上古神器：生命之水\n";
		break;
	}

	//显示敌人血量 这里的boss就是com_enem
	cout << endl;
	int bossnowBitMax = (double)boss.health / boss.maxHealth * 10;
	cout << "敌人: " << boss.name << endl;;
	cout << "生命 " << boss.health;
	cout << "   \t|";
	for (int i = 0; i < bossnowBitMax - 1; i++) cout << "██";
	for (int i = 0; i < 20 - 2 * bossnowBitMax; i++) cout << " ";
	cout << "|";
	cout << " MAX " << boss.maxHealth;
	cout << endl;

	//显示行动
	for (int i = 0; i < 17; i++)
		cout << "—";
	cout << endl;

	cout << "1:攻击  " << "2:治疗  " << "3:增加护甲";

	if (player.zhiEquip == true)
	{
		cout << "\n4.蓄力攻击 （蓄力层数：" << player.xuli << "）\n";
		cout << "5.再生招架\n";
	}
}