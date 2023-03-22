#include <iostream>
#include "total.h"
using namespace std;


int common_enermy_meet1(Hero& player)
{
	srand((unsigned)time(0));
	int meet = rand() % 3 + 1;

	const char* namelist[5] = {
		"沈阳大街",
		"团长",
		"我徒弟呢",
		"没你好果汁吃！",
		"走！忽略！",
	};
	int defname1 = rand() % 5;
	int defname2 = rand() % 5;


	com_enem enem1(rand() % 20 + 50, rand() % 5 + 5, namelist[defname1], 1);
	com_enem enem2(rand() % 20 + 50, rand() % 5 + 5, namelist[defname2], 1);

	if (meet == 1)
	{
		timep();
		cout << "前方还算安静，去休息一下吧。\n";
		timep(2);
		return -1;
	}
	else if (meet == 2)
	{
		timep();
		cout << "你遇到了一个敌人……但别怕，它没有魔王那么强。" << endl;
		timep(2);
		showenem(enem1);
		int result1 = fight_enem(player, enem1);
		if (result1 == 1)   //胜利
			return 1;
		else if (result1 == 0)  //失败
			return 0;
	}
	else if (meet == 3)
	{
		timep();
		cout << "糟糕！前方有两个敌人……这……祝你好运！" << endl;
		timep(2);
		showenem(enem1);
		int result2 = fight_enem(player, enem1);
		if (result2 == 0)
			return 0;
		timep();
		cout << "太好了！你已经干掉一个了！还剩一个。" << endl;
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
		"你说的对",
		"我们原神怎么你了？",
		"后面的忘了",
		"体育生",
		"椅子是可以坐的",
	};
	int defname1 = rand() % 5;
	int defname2 = rand() % 5;
	int defname3 = rand() % 5;


	com_enem enem1(rand() % 20 + 50, rand() % 5 + 5, namelist[defname1], 1);
	com_enem enem2(rand() % 20 + 50, rand() % 5 + 5, namelist[defname2], 1);
	com_enem enem3(rand() % 20 + 50, rand() % 5 + 5, namelist[defname3], 1);

		timep();
		cout << "三个敌人，这是第一个。" << endl;
		timep(2);
		showenem(enem1);
		int result1 = fight_enem(player, enem1);
		if (result1 == 0)
			return 0;

		timep();
		cout << "干掉一个了！还剩两个。" << endl;
		timep(2);
		showenem(enem2);
		int result2 = fight_enem(player, enem2);
		if (result2 == 0)
			return 0;

		timep();
		cout << "最后一个了，终结它！" << endl;
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
		"小黑子",
		"我家geigei",
		"时长两年半的",
		"个人练习生",
		"唱跳rap篮球",
	};

	int defname[5];
	for (int i = 0; i < 4; i++)
		defname[i] = rand() % 5;

	com_enem enem1(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[0]], 1);
	com_enem enem2(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[1]], 1);
	com_enem enem3(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[2]], 1);
	com_enem enem4(rand() % 51 + 100, rand() % 5 + 10, namelist[defname[3]], 1);



	cout << "前方有 " << meet << " 个敌人。" << endl;
	switch (meet)
	{
	case 4:     //遇敌数：4
	
		int result3;
		timep();
		showenem(enem4);
		result3 = fight_enem(player, enem4);
		if (result3 == 0)
			return 0;
	
	case 3:    //遇敌数：3
	
		int result2;
		timep();
		showenem(enem3);
		result2 = fight_enem(player, enem3);
		if (result2 == 0)
			return 0;
	
	case 2:    //遇敌数：2
	
		int result1;
		timep();
		showenem(enem1);
		result1 = fight_enem(player, enem1);
		if (result1 == 0)  //失败
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

