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
			fout << "��";
		fout << endl << "  " << "�������" << player.name << "       \t";
		fout << endl << "  " << "����ֵ��" << player.health << "            \t";
		fout << endl << "  " << "����ֵ��" << player.defence << "             \t";
		fout << endl << "  " << "��������" << player.damage << "             \t";

		switch (player.godEquip)
		{
		case 1:
			fout << endl << "  " << "�Ϲ��������Ϲ�֮��          \t";
			break;
		case 2:
			fout << endl << "  " << "�Ϲ�����������֮��          \t";
			break;
		case 3:
			fout << endl << "  " << "�Ϲ�����������֮ˮ          \t";
			break;
		}
		fout << endl;
		for (int i = 0; i < 10; i++)
			fout << "��";

		fout << "\n  ����˺��ܼƣ�" << player.total_damage << endl;
		fout << "  �ܵ��˺��ܼƣ�" << player.total_be_att << endl;
		fout << "  �ܻغ�����" << player.enter << endl;

		for (int i = 0; i < 17; i++)
			fout << "��";

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