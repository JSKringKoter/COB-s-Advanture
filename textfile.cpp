#include <iostream>
#include "total.h"
using namespace std;

int tital()
{
	cout << "  *****   ******  ********" << endl;
	cout << " *       *      *  *      *" << endl;
	cout << " *       *      *  *      *" << endl;
	cout << " *       *    ************" << endl;
	cout << " *       *      *  *      *" << endl;
	cout << " *       *      *  *      *" << endl;
	cout << "  *****   ******  ********" << "  's Advanture \n" << endl;
	
	timep(2);

	cout << "1����ʼ��ͨģʽ" << endl;
	cout << "2����ʼ�Զ�ģʽ" << endl;
	cout << "3���˳���Ϸ " << endl;

	cout << endl;

	int a;
	cout << "����ģʽѡ��";
	while (1)
	{
		while (!(cin >> a))
		{
			cin.clear();
			cin.get();
			continue;
		}
		cin.get();
		if (a == 1)
			return 1;
		else if (a == 2)
			return 2;
		else if (a == 3)
			return 3;
		else
			continue;
	}

}


void showstory1_1()
{
	for (int i = 0; i < 5; i++)
		cout << endl;
	print_(13);
	cout << "|# STORY1_1 #  ���µĿ�ʼ|";
	print_(13);
	
	timep(2);
	cout << "�� ǰ����Ҫ ��" << endl;
	timep(2);
	cout << "�㲻֪��������ô��Խ�����ġ�" << endl;
	timep(2);
	cout << "������ɰ����賿3�㣬һ����������Χ��һ�ж��������ӡ�" << endl;
	timep(2);
	cout << "����һƪ�ݵأ����ֱ߷���һ�ѵ��ֽ���" << endl;
	timep(2);
	cout << "�����ǵġ���С���ֹ���������Խ�˲�֪����ϲ����˫�ֽ�����" << endl;
	timep(2);
	cout << "������ʱ����Ķ���������һ��������" << endl << endl;
	timep(2);
	cout << "��ӭ����������磬���ߡ�" << endl;
	timep(2);
	cout << "����Ȼ��Ҳ��֪��������ô���ģ�" << endl;
	timep(2);
	cout << "�����ǻ�ӭ�㡣\n" << endl;
	timep(3);
	cout << "�ܱ�Ǹ��Ҫ������һ������Ϣ��" << endl;
	timep(2);
	cout << "������粢�����������������а���������" << endl;
	timep(2);
	cout << "��֪�����Ƿ�����COB��" << endl;
	timep(2);
	cout << "�����֯�ĳ�Աһֱ��ѹե������硣" << endl;
	timep(2);
	cout << "����������Ҫһ����ʿ������һ��ˮ����" << endl;
	timep(2);
	cout << "��Ȼ�����ˣ��Ǿ����԰ɣ�������Ҳ����ȥ����Ц��" << endl;
	timep(2);
	cout << "������������ְɣ������ҿ�����ʽ�سƺ��㡣\n" << endl;
	timep(2);
	cout << "# End STORY1_1 #\n";
}

void showstory1_2(Hero& player)
{
	print_(13);
	cout << "|# STORY1_2 #  ��һ������|";
	print_(13);
	timep(2);
	cout << "�ܺã�" << player.name << "�������ҽ�������һЩ�����" << endl;
	timep(2);
	cout << "�������������ħ����" << endl;
	timep(2);
	cout << "ֻҪ������������ħ��������ͽ�����ƽ����" << endl;
	timep(2);
	cout << "������ħ�����в�һ����������" << endl;
	timep(2);
	cout << "��Ȼ��������ֱ��ç����ò����Ҳû����������" << endl;
	timep(2);
	cout << "˻" << endl;
	timep(2);
	cout << "��������������ʲô��" << endl;
	timep(2);
	cout << "�����ǵ�һ��ħ������" << endl;
	timep(2);
	cout << "����ͣ��������ˡ�" << endl;
	timep(2);
	cout << "# End STORY1_2 #\n\n";
	timep(2);
	cout << "[ħ������ת�˹�����]\n";
}

int showstory2_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_1 # �Ϲ�֮����|";
	print_(13);
	timep(2);
	cout << "Ŷ��𣬿��������˵�һ��ħ����" << endl;
	timep(2);
	cout << "�š������������㻹���е�ʵ���ġ�" << endl;
	timep(2);
	cout << "�����Ļ���Ҳ����Ӧ���ṩ��һЩ������" << endl;
	timep(2);
	cout << "���������Ϲ�����������һ���ɡ�" << endl;
	timep(2);
	cout << "��������֮�����;�ϰ����㡣\n" << endl;
	timep(2);
	cout << "1���Ϲ�֮��    �����˺�����20������������30%��" << endl;
	cout << "2������֮��    ����ֵ����10��Boss�Ĺ���������������ֵ��" << endl;
	cout << "3������֮ˮ    Ѫƿ��ʹ�������ޡ�\n" << endl;

	int a;
	while (1)
	{
		while (!(cin >> a))
		{
			cin.clear();
			cin.get();
			continue;
		}
		cin.get();
		if (a == 1)
			return 1;
		else if (a == 2)
			return 2;
		else if (a == 3)
			return 3;
		else
			continue;
	}

}

void showstory2_2()
{
	int temp = 0;
	timep(2);
	print_(13);
	cout << "|# STORY2_2 #      |";
	print_(13);
	timep(2);
	cout << "�ú�ʹ�����װ������������һλ��ʿ����ħ��ʱ�Ŵ������ġ�\n" << endl;

	timep(2);
	cout << "1����һλ���ߣ�����˭��" << endl;
	cout << "2���ѵ�����û�����ӵ�С�����Ӻ���һ����Խ��������" << endl;
	couin(temp);
	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n��һλ���ߡ�����������������һ����ܸ����㡣" << endl;
	else if (temp == 2)
	{
		cout << "\n[ �Ǹ�����һʱû��˵�� ]\n";
		timep(2);
		cout << "���ԶԶ԰��ԶԶԣ����û�����ӡ�" << endl;
	}
	timep(2);
	cout << "��ղŻ��ܵ�ħ������COB��KRING����������ħ����ʵ��������һ����" << endl;
	timep(2);
	cout << "���������ħ���ֱ���Godspeed��AfternoonTea��" << endl;
	timep(2);
	cout << "��ǰ�����������Ǵ�Ӫ���ſ��ˡ�" << endl;
	timep(2);
	cout << "һ����˵��������е��ˣ���С��һ�㡣" << endl;
	timep(2);
	cout << "ֻҪ���������ͻ�����ħ��Godspeed�ˡ�" << endl;
	timep(2);
	cout << "�������㣬���ߡ�\n" << endl;
	timep(2);
	cout << "# End STORY2_2 #\n\n";
}

void showstory2_0()
{
	int temp = 0;
	timep(2);
	cout << "\n���С���������㡣" << endl;
	timep(2);
	cout << "\n[ һ�����ʴ󽣳��������� ]" << endl;
	timep(2);
	cout << "\n1������ʲô����" << endl;
	cout << "2����tmd�Ͳ��ܷ��ڵ��ϣ�����������ô�죿" << endl;

	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n�����ҵ��彣�������ҽ������㡭���Ͼ������������ϲŸ����á�" << endl;
	else if (temp == 2)
	{
		cout << "\n[ �����еĽ�ƾ����ʧ���������׿���ĵ��ϳ����� ]\n";
		timep(2);
		cout << "[ ����˽�� ] ɵ�ѡ�" << endl;
	}
	timep(2);
	cout << "��ѽ�������һЩ����Ҫ��������" << endl;
	timep(2);
	cout << "����������ն��ǿ���Ľ�����" << endl;
	timep(2);
	cout << "������Ҫʱ�䣬���������˺�ʮ�ֲֿ���" << endl;
	timep(2);
	cout << "��Ȼ����Ҳ�����������мܣ�����Ϊ��ֵ��˺���" << endl;
	timep(2);
	cout << "���ң��ֵ����˺�����ת��Ϊ�������������������ˡ����Ƶ�Ѫ���ܹ�����ͻ������������ޡ�" << endl;

	timep(2);
	cout << "\n1����ô�����Ľ�����Ϊʲô���Լ��ã�" << endl;
	cout << "2��nb�������������ǲ�����׬�ö�Ǯ��лл��໣�" << endl;

	cin.get();
	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n����������������ϲ��ܷ��ӳ�����ȫ��������" << endl;
	else if (temp == 2)
	{
		cout << "\n��tmdҲлл��໣�\n";
	}
	timep(2);
	cout << "�����������[ ����֮�� ]" << endl;
	timep();
	cout << "ϰ�ü��ܣ���������    �������غϺ󣬽���һ���ı��˺��Ĺ�����" << endl;
	timep();
	cout << "ϰ�ü��ܣ������м�    �ֵ���һ�ι������ָ��˴εֵ��˺����������ָ�����������Ѫ�����ޣ�����һ��ʱ�䡣" << endl;
}

void showstory2_3()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_3 #  ȫ�µ���ս|";
	print_(13);
	timep(2);
	cout << "\n������׼���ý����������ս�ˡ�" << endl;
	timep(2);
	cout << "������ѡ��� [�Ϲ�����] ����� [����֮��] �������ż�ʹ�����յ�ħ��Ҳ���ڻ��¡�" << endl;
	timep(2);
	cout << "ǰ�滹�м������ˣ�����ѽ�ɱ�����ǣ�" << endl;
	timep(2);
	cout << "\n# End STORY2_3 #\n" << endl;
}

void showstory2_4()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_4 #  ��������ս|";
	print_(13);
	timep(2);
	cout << "��Щûʲô�õ�С�ֶ�����˵ûʲô�Ѷȣ��԰ɡ�" << endl;
	timep(2);
	cout << "������������������ս��" << endl;
	timep(2);
	cout << "��������ĵ�ħ������" << endl;
	timep(2);
	cout << "�ǵģ�������Godspeed��" << endl;
	timep(2);
	cout << "���Ĺ����ᴩ͸��Ļ��ס�" << endl;
	timep(2);
	cout << "����ʹ���м��赲�����ܵĹ�����" << endl;
	timep(2);
	cout << "���ˣ�ף����ˡ�" << endl;
	timep(2);
	cout << "\n# End STORY2_4 #\n" << endl;
}

void showstory3_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY3_1 #|";
	print_(13);
	timep(2);
	cout << "̫���ˣ������˵ڶ���ħ����" << endl;
	timep(2);
	cout << "���Ϊ����ף��" << endl;
	timep(2);
	cout << "����ǰ������һ��ħ�������ڻ�Ϊʱ���硣" << endl;
	timep(2);
	cout << "�㼴������䱸ɭ�ϵ�COB�Ǳ��ڲ���" << endl;
	timep(2);
	cout << "һ����ս�����������⡣" << endl;
	timep(2);
	cout << "\n# End STORY3_1 #\n" << endl;
}

void showstory4_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY4_1 #  ���ĵ���|";
	print_(13);
	timep(2);
	cout << "[ �㽫���һ�����˻����ڵء� ]" << endl;
	timep(2);
	cout << "[ ���𽣣��������������Ǳ�������� ]" << endl;
	timep(2);
	cout << "[ ���һ��ħ����������˭�أ� ]" << endl;
	timep(2);
	cout << "[ ���ߵ����ǳǱ��Ĵ���ǰ�� ]" << endl;
	timep(2);
	cout << "[ �䣡 ]" << endl;
	timep(2);
	cout << "[ �޴�ĳ�����������²��ȣ���һͷ�Ե��ڵ��ϡ� ]" << endl;
	timep(2);
	cout << "[ ��û���㷴Ӧ������һ�ѽ��ᴩ������ؿڡ� ]" << endl;
	timep(2);
	cout << "\n�����������ǿɱ��ء�\n" << endl;
	timep(2);
	cout << "[ �Ժ��е�����ȴ����ǰ������Ļɢȥ��ֻʣ����һ��ȫ�����׵���ʿ�� ]" << endl;
	timep(2);
	cout << "[ ��������а�ȵ�Ц�š� ]" << endl;
	timep(2);
	cout << "\n��ͷ�������㻹��û�и�������˭��ָʹ��һ�аɣ�" << endl;
	timep(2);
	cout << "���ǿ����������ء�" << endl;
	timep(2);
	cout << "���ڡ���������COB���������Ц��һ�����磬�����ҵ��ƿ�֮���ˡ�" << endl;
	timep(2);
	cout << "��ô˵�������һ�Ҫ�ú�лл���ء�" << endl;
	timep(2);
	cout << "���ȥ������������ȥ��\n" << endl;
	timep(2);
	cout << "[ ����������������ٴ���������� ]" << endl;
	timep(2);
	cout << "[ �ϣ� ]" << endl;
	timep(2);
	cout << "[ ���е�����֮���ɳ�����ס�����ĳ�����������ײ�ĵط�ð���˽�ɫ�Ļ� ]" << endl;
	timep(2);
	cout << "[ ��ǰ���˿�����������ˣ�����ת˲�䡣 ]" << endl;
	timep(2);
	cout << "\n�����мܣ���\n" << endl;
	timep(2);
	cout << "[ ���ĳ���������˳�ȥ�� ]" << endl;
	timep(2);
	cout << "[ ��վ��������֮���ɵ�������С� ]" << endl;
	timep(2);
	cout << "[ ������˾��ġ� ]" << endl;
	timep(2);
}

void showstory4_2()
{
	timep(2);
	print_(13);
	cout << "|# STORY4_2 #  ���µĽ���|";
	print_(13);
	timep(2);
	cout << "�ǰ��������ߡ�����������ҡ���" << endl;
	timep(2);
	cout << "ף���㡭��" << endl;
	timep(2);
	cout << "���㿴������������û����ȥ�˰ɡ���" << endl;
	timep(2);
	cout << "ȥ�ҡ���COB�Ǳ�����ġ�����ֻè����" << endl;
	timep(2);
	cout << "һ���С�����ȥ�İ취����" << endl;
	timep(2);
	cout << "���ˡ�����Ҫ���ˡ���" << endl;
	timep(2);
	cout << "�����˰ݰ������ϣ�" << endl;
	timep(2);
	cout << "\n# End STORY4_2 #\n" << endl;
}

void showstory_End()
{
	timep(2);
	print_(14);
	cout << "|# STORY Final #  ����ʱ��|";
	print_(14);
	timep(2);
	cout << "�������˶���" << endl;
	timep(2);
	cout << "ò����Ҳû��Ҫ��ȥ��������������һ������ɡ���\n" << endl;
	timep(2);
	cout << "[ ��һ�룬ʱ��Ť������ ]" << endl;
	timep(2);
	cout << "\n# End STORY Final #\n" << endl;
}

void showstory5_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY5_1 #  һ��͹�ȥ|";
	print_(13);
	timep(2);
	cout << "������Ǳ����ȥ��" << endl;
	timep(2);
	cout << "ټ��ĳǱ�����һ�ˡ�" << endl;
	timep(2);
	cout << "���������������������һ�ȴ��š�" << endl;
	timep(2);
	cout << "\n1���ƿ����š�" << endl;
	cout << "2��ת���뿪��" << endl;

	int temp = 0;
	while (!(0 < temp && temp < 3))
		couin(temp);

	timep(2);
	switch (temp)
	{
	case 1:
		cout << "���ƿ��˴��š�" << endl;
		timep(2);
		cout << "�������棬��һ���ִ��İ칫����" << endl;
		timep(2);
		cout << "���ϰ��ŵĿ��Ȼ�ð���������ļ�̯���ţ��·����˸ո��뿪��" << endl;
		timep(2);
		cout << "������������������ڰ칫���ϵ�һֻ" << endl;
		timep(2);
		cout << "è��" << endl;
		timep(2);
		cout << "����ͻȻ���֣��ⲻ����ʹ��һ�����ڹ����������" << endl;
		timep(2);
		cout << "���ϵĿ��ȣ��������������ǰ���ݺõġ�" << endl;
		timep(2);
		cout << "��Щ�ļ�����ֻ����Ż��������ҵ�̯���ɡ�" << endl;
		timep(2);
		cout << "����Ȼ��ͷ��������ղŴ򿪵��ź��棬����û��ʲô�Ǳ���" << endl;
		timep(2);
		cout << "�������⣬ֻ���峿���˻������Ľֵ���������־���" << endl;
		timep(2);
		cout << "����һ����Ӱ���Ž����ˡ�" << endl;
		timep(2);
		cout << "[ �簡��] ��˵�������Ĺ�����д�ţ�Godspeed��" << endl;
		timep(2);
		cout << "�ղŵ�һ�з·�û�з�����һ�㡣" << endl;
		timep(2);
		cout << "���ֻص�������Ϥ�����硣" << endl;
		timep(2);
		cout << "���ϵ�ֽ������KringKoter������İɡ��Ͼ����Ѿ���������û�н������ˡ�" << endl;
		timep(2);
		cout << "AfternoonTea������������ôæµ�ء������ϾͿ�ʼ�����ĵ���" << endl;
		timep(2);
		cout << "Canvas�����㣬�����Ķ����϶������ڸɻ" << endl;
		timep(2);
		cout << "����ƽ���������õ�һ���ء�" << endl;
		timep(2);
		cout << "���èè��������������������˯�������е�ըë��" << endl;
		timep(2);
		cout << "������ѽ����ҲҪ�����ˡ�" << endl;
		timep(2);
		cout << "��֮�����������ȶ���˵һ�䣺" << endl;
		timep(3);
		cout << "�簲��" << endl;
		timep(2);
		cout << "# End STORY6_1 #\n\n" << endl;
		timep(2);
		cout << "# End The Game #" << endl;
		timep(2);
		cout << "Thanks for play��the preasent for my friends." << endl;
		timep(2);
		cout << "                                                                            KringKoter����\n";
		timep(5);
		cout << "\n\n\n";
		break;
	case 2:
		cout << "ʲôèè���϶���ƭ�˵İɣ��Ǹ�ħ����֪������ˣʲô���С�" << endl;
		timep(2);
		cout << "ΪʲôҪ���������ġ�" << endl;
		timep(2);
		cout << "[ ��ת�����˳�ȥ����Ҳû�л�ͷ�� ]" << endl;
		timep(2);
		cout << "# End STORY6_1 #\n\n" << endl;
		timep(2);
		cout << "# End The Game #" << endl;
		break;

	}
}