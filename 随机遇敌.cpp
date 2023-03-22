#include <iostream>
#include "total.h"
using namespace std;


int common_enermy_meet1(Hero& player)
{
	srand((unsigned)time(0));
	int meet = rand() % 3 + 1;

	const char* namelist[5] = {
		"�������",
		"�ų�",
		"��ͽ����",
		"û��ù�֭�ԣ�",
		"�ߣ����ԣ�",
	};
	int defname1 = rand() % 5;
	int defname2 = rand() % 5;


	com_enem enem1(rand() % 20 + 50, rand() % 5 + 5, namelist[defname1], 1);
	com_enem enem2(rand() % 20 + 50, rand() % 5 + 5, namelist[defname2], 1);

	if (meet == 1)
	{
		timep();
		cout << "ǰ�����㰲����ȥ��Ϣһ�°ɡ�\n";
		timep(2);
		return -1;
	}
	else if (meet == 2)
	{
		timep();
		cout << "��������һ�����ˡ��������£���û��ħ����ôǿ��" << endl;
		timep(2);
		showenem(enem1);
		int result1 = fight_enem(player, enem1);
		if (result1 == 1)   //ʤ��
			return 1;
		else if (result1 == 0)  //ʧ��
			return 0;
	}
	else if (meet == 3)
	{
		timep();
		cout << "��⣡ǰ�����������ˡ����⡭��ף����ˣ�" << endl;
		timep(2);
		showenem(enem1);
		int result2 = fight_enem(player, enem1);
		if (result2 == 0)
			return 0;
		timep();
		cout << "̫���ˣ����Ѿ��ɵ�һ���ˣ���ʣһ����" << endl;
		timep(2);
		showenem(enem2);
		int result3 = fight_enem(player, enem2);
		if (result3 == 1)
			return 1;
		else if (result3 == 0)
			return 0;
	}
}


int common_enermy_meet2(Hero& player)
{
	srand(time(0));
	const char* namelist[5] = {
		"��˵�Ķ�",
		"����ԭ����ô���ˣ�",
		"���������",
		"������",
		"�����ǿ�������",
	};
	int defname1 = rand() % 5;
	int defname2 = rand() % 5;
	int defname3 = rand() % 5;


	com_enem enem1(rand() % 20 + 50, rand() % 5 + 5, namelist[defname1], 1);
	com_enem enem2(rand() % 20 + 50, rand() % 5 + 5, namelist[defname2], 1);
	com_enem enem3(rand() % 20 + 50, rand() % 5 + 5, namelist[defname3], 1);

		timep();
		cout << "�������ˣ����ǵ�һ����" << endl;
		timep(2);
		showenem(enem1);
		int result1 = fight_enem(player, enem1);
		if (result1 == 0)
			return 0;

		timep();
		cout << "�ɵ�һ���ˣ���ʣ������" << endl;
		timep(2);
		showenem(enem2);
		int result2 = fight_enem(player, enem2);
		if (result2 == 0)
			return 0;

		timep();
		cout << "���һ���ˣ��ս�����" << endl;
		timep(2);
		showenem(enem3);
		int result3 = fight_enem(player, enem3);
		if (result3 == 1)
			return 1;
		else if (result3 == 0)
			return 0;
}

int common_enermy_meet3(Hero& player)
{
	srand((unsigned)time(0));
	int meet = rand() % 3 + 2;

	const char* namelist[5] = {
		"С����",
		"�Ҽ�geigei",
		"ʱ��������",
		"������ϰ��",
		"����rap����",
	};

	int defname[5];
	for (int i = 0; i < 4; i++)
		defname[i] = rand() % 5;

	com_enem enem1(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[0]], 1);
	com_enem enem2(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[1]], 1);
	com_enem enem3(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[2]], 1);
	com_enem enem4(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[3]], 1);



	cout << "ǰ���� " << meet << " �����ˡ�" << endl;
	switch (meet)
	{
	case 4:     //��������4
	
		int result3;
		timep();
		showenem(enem4);
		result3 = fight_enem(player, enem4);
		if (result3 == 0)
			return 0;
	
	case 3:    //��������3
	
		int result2;
		timep();
		showenem(enem3);
		result2 = fight_enem(player, enem3);
		if (result2 == 0)
			return 0;
	
	case 2:    //��������2
	
		int result1;
		timep();
		showenem(enem1);
		result1 = fight_enem(player, enem1);
		if (result1 == 0)  //ʧ��
			return 0;
		timep();
		showenem(enem2);
		result1 = fight_enem(player, enem2);
		if (result1 == 1)
			return 1;
		else if (result1 == 2)
			return 0;
		break;
    }
}

