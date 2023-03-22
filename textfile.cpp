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

	cout << "1：开始普通模式" << endl;
	cout << "2：开始自定模式" << endl;
	cout << "3：退出游戏 " << endl;

	cout << endl;

	int a;
	cout << "输入模式选择：";
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
	cout << "|# STORY1_1 #  故事的开始|";
	print_(13);
	
	timep(2);
	cout << "【 前情提要 】" << endl;
	timep(2);
	cout << "你不知道你是怎么穿越进来的。" << endl;
	timep(2);
	cout << "昨晚打派熬到凌晨3点，一觉醒来，周围的一切都变了样子。" << endl;
	timep(2);
	cout << "这是一篇草地，右手边放着一把单手剑。" << endl;
	timep(2);
	cout << "“真是的”你小声嘀咕：“都穿越了不知道我喜欢用双手剑。”" << endl;
	timep(2);
	cout << "就在这时，你的耳边响起了一个声音。" << endl << endl;
	timep(2);
	cout << "欢迎来到这个世界，勇者。" << endl;
	timep(2);
	cout << "（虽然我也不知道你是怎么来的）" << endl;
	timep(2);
	cout << "但还是欢迎你。\n" << endl;
	timep(3);
	cout << "很抱歉我要告诉你一个坏消息。" << endl;
	timep(2);
	cout << "这个世界并不安宁。这里充满了邪恶的势力。" << endl;
	timep(2);
	cout << "不知道你是否听过COB。" << endl;
	timep(2);
	cout << "这个组织的成员一直在压榨这个世界。" << endl;
	timep(2);
	cout << "我们迫切需要一个勇士拯救这一方水土。" << endl;
	timep(2);
	cout << "既然你来了，那就试试吧，反正你也出不去。（笑）" << endl;
	timep(2);
	cout << "告诉我你的名字吧，这样我可以正式地称呼你。\n" << endl;
	timep(2);
	cout << "# End STORY1_1 #\n";
}

void showstory1_2(Hero& player)
{
	print_(13);
	cout << "|# STORY1_2 #  第一个敌人|";
	print_(13);
	timep(2);
	cout << "很好，" << player.name << "，现在我将告诉你一些情况。" << endl;
	timep(2);
	cout << "这个世界有三个魔王。" << endl;
	timep(2);
	cout << "只要击败了这三个魔王，世界就将归于平静。" << endl;
	timep(2);
	cout << "这三个魔王都有不一样的能力。" << endl;
	timep(2);
	cout << "虽然不建议你直接莽，但貌似你也没法发育……" << endl;
	timep(2);
	cout << "嘶" << endl;
	timep(2);
	cout << "啊啦啊啦，那是什么？" << endl;
	timep(2);
	cout << "好像是第一个魔王诶！" << endl;
	timep(2);
	cout << "你加油，我先润了。" << endl;
	timep(2);
	cout << "# End STORY1_2 #\n\n";
	timep(2);
	cout << "[魔王朝你转了过来。]\n";
}

int showstory2_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_1 # 上古之神器|";
	print_(13);
	timep(2);
	cout << "哦吼吼，看来你打败了第一个魔王。" << endl;
	timep(2);
	cout << "嗯……看来……你还是有点实力的。" << endl;
	timep(2);
	cout << "这样的话，也许我应该提供你一些帮助。" << endl;
	timep(2);
	cout << "我有三件上古神器，拿走一件吧。" << endl;
	timep(2);
	cout << "它会在你之后的旅途上帮助你。\n" << endl;
	timep(2);
	cout << "1：上古之剑    攻击伤害增加20，暴击率增加30%。" << endl;
	cout << "2：壁垒之盾    护甲值增加10，Boss的攻击不再削减护甲值。" << endl;
	cout << "3：生命之水    血瓶的使用量无限。\n" << endl;

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
	cout << "好好使用这件装备……它是上一位勇士征讨魔王时遗存下来的。\n" << endl;

	timep(2);
	cout << "1：上一位勇者？那是谁？" << endl;
	cout << "2：难道还有没长脑子的小逼崽子和我一样穿越进来了吗？" << endl;
	couin(temp);
	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n上一位勇者……你问起这个……我还不能告诉你。" << endl;
	else if (temp == 2)
	{
		cout << "\n[ 那个声音一时没有说话 ]\n";
		timep(2);
		cout << "啊对对对啊对对对，你才没长脑子。" << endl;
	}
	timep(2);
	cout << "你刚才击败的魔王，是COB的KRING……是三个魔王中实力最弱的一个。" << endl;
	timep(2);
	cout << "后面的两个魔王分别是Godspeed和AfternoonTea。" << endl;
	timep(2);
	cout << "而前方，就是他们大本营的门口了。" << endl;
	timep(2);
	cout << "一般来说，这里会有敌人，请小心一点。" << endl;
	timep(2);
	cout << "只要经过这里，你就会遇到魔王Godspeed了。" << endl;
	timep(2);
	cout << "我相信你，勇者。\n" << endl;
	timep(2);
	cout << "# End STORY2_2 #\n\n";
}

void showstory2_0()
{
	int temp = 0;
	timep(2);
	cout << "\n还有……这个给你。" << endl;
	timep(2);
	cout << "\n[ 一把银质大剑出现在手中 ]" << endl;
	timep(2);
	cout << "\n1：这是什么剑？" << endl;
	cout << "2：你tmd就不能放在地上？扎到我了怎么办？" << endl;

	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n这是我的佩剑，现在我将它给你……毕竟，它在你手上才更有用。" << endl;
	else if (temp == 2)
	{
		cout << "\n[ 你手中的剑凭空消失，又在两米开外的地上出现了 ]\n";
		timep(2);
		cout << "[ 窃窃私语 ] 傻卵。" << endl;
	}
	timep(2);
	cout << "这把剑，有着一些你需要的能力。" << endl;
	timep(2);
	cout << "它可以蓄力斩出强力的剑气。" << endl;
	timep(2);
	cout << "蓄力需要时间，但是它的伤害十分恐怖。" << endl;
	timep(2);
	cout << "当然，你也可以用它来招架，它能为你抵挡伤害。" << endl;
	timep(2);
	cout << "而且，抵挡的伤害，将转化为你的生命，治疗你的损伤。治疗的血量能够短暂突破你的能力上限。" << endl;

	timep(2);
	cout << "\n1：这么厉害的剑，你为什么不自己用？" << endl;
	cout << "2：nb啊，那我卖了是不是能赚好多钱？谢谢您嗷！" << endl;

	cin.get();
	while (!(1 <= temp && temp <= 2))
		couin(temp);

	timep(2);
	if (temp == 1)
		cout << "\n我相信它在你的手上才能发挥出它的全部能力。" << endl;
	else if (temp == 2)
	{
		cout << "\n我tmd也谢谢您嗷！\n";
	}
	timep(2);
	cout << "获得了武器：[ 秩序之剑 ]" << endl;
	timep();
	cout << "习得技能：蓄力攻击    蓄力两回合后，进行一次四倍伤害的攻击。" << endl;
	timep();
	cout << "习得技能：再生招架    抵挡下一次攻击，恢复此次抵挡伤害的生命。恢复的生命无视血量上限，持续一段时间。" << endl;
}

void showstory2_3()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_3 #  全新的挑战|";
	print_(13);
	timep(2);
	cout << "\n看来你准备好接受下面的挑战了。" << endl;
	timep(2);
	cout << "有了你选择的 [上古神器] 和这把 [秩序之剑] ，我相信即使是最终的魔王也不在话下。" << endl;
	timep(2);
	cout << "前面还有几个敌人，用这把剑杀光他们！" << endl;
	timep(2);
	cout << "\n# End STORY2_3 #\n" << endl;
}

void showstory2_4()
{
	timep(2);
	print_(13);
	cout << "|# STORY2_4 #  真正的挑战|";
	print_(13);
	timep(2);
	cout << "这些没什么用的小怪对你来说没什么难度，对吧。" << endl;
	timep(2);
	cout << "接下来才是真正的挑战。" << endl;
	timep(2);
	cout << "看到那里的的魔王了吗？" << endl;
	timep(2);
	cout << "是的，他就是Godspeed。" << endl;
	timep(2);
	cout << "他的攻击会穿透你的护甲。" << endl;
	timep(2);
	cout << "尽量使用招架阻挡他可能的攻击。" << endl;
	timep(2);
	cout << "好了，祝你好运。" << endl;
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
	cout << "太好了！你解决了第二个魔王！" << endl;
	timep(2);
	cout << "真该为你庆祝。" << endl;
	timep(2);
	cout << "但是前方还有一个魔王。现在还为时过早。" << endl;
	timep(2);
	cout << "你即将进入戒备森严的COB城堡内部。" << endl;
	timep(2);
	cout << "一场大战恐怕在所难免。" << endl;
	timep(2);
	cout << "\n# End STORY3_1 #\n" << endl;
}

void showstory4_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY4_1 #  最后的敌人|";
	print_(13);
	timep(2);
	cout << "[ 你将最后一个敌人击倒在地。 ]" << endl;
	timep(2);
	cout << "[ 提起剑，你走向了那座城堡的最深处。 ]" << endl;
	timep(2);
	cout << "[ 最后一个魔王，到底是谁呢？ ]" << endl;
	timep(2);
	cout << "[ 你走到了那城堡的大门前。 ]" << endl;
	timep(2);
	cout << "[ 轰！ ]" << endl;
	timep(2);
	cout << "[ 巨大的冲击力让你重新不稳，你一头栽倒在地上。 ]" << endl;
	timep(2);
	cout << "[ 还没等你反应过来，一把剑贯穿了你的胸口。 ]" << endl;
	timep(2);
	cout << "\n啧啧啧，真是可悲呢。\n" << endl;
	timep(2);
	cout << "[ 脑海中的声音却在眼前响起，烟幕散去，只剩下了一个全身铠甲的骑士。 ]" << endl;
	timep(2);
	cout << "[ 他对着你邪魅地笑着。 ]" << endl;
	timep(2);
	cout << "\n到头来……你还是没有搞明白是谁在指使这一切吧？" << endl;
	timep(2);
	cout << "真是可怜的勇者呢。" << endl;
	timep(2);
	cout << "现在……无论是COB，还是这可笑的一方世界，都在我的掌控之下了。" << endl;
	timep(2);
	cout << "这么说来……我还要好好谢谢你呢。" << endl;
	timep(2);
	cout << "想回去吗？我这就送你回去。\n" << endl;
	timep(2);
	cout << "[ 他将长剑抽出，又再次向你刺来。 ]" << endl;
	timep(2);
	cout << "[ 锵！ ]" << endl;
	timep(2);
	cout << "[ 手中的秩序之剑飞出，挡住了他的长剑。两剑相撞的地方冒出了金色的火花 ]" << endl;
	timep(2);
	cout << "[ 胸前的伤口神奇地愈合了，就在转瞬间。 ]" << endl;
	timep(2);
	cout << "\n再生招架！？\n" << endl;
	timep(2);
	cout << "[ 他的长剑被震飞了出去。 ]" << endl;
	timep(2);
	cout << "[ 你站起身，秩序之剑飞到你的手中。 ]" << endl;
	timep(2);
	cout << "[ 你充满了决心。 ]" << endl;
	timep(2);
}

void showstory4_2()
{
	timep(2);
	print_(13);
	cout << "|# STORY4_2 #  故事的结束|";
	print_(13);
	timep(2);
	cout << "是啊……勇者……你击败了我……" << endl;
	timep(2);
	cout << "祝贺你……" << endl;
	timep(2);
	cout << "可你看看……你现在没法出去了吧……" << endl;
	timep(2);
	cout << "去找……COB城堡最深处的……那只猫……" << endl;
	timep(2);
	cout << "一定有……出去的办法……" << endl;
	timep(2);
	cout << "好了……我要死了……" << endl;
	timep(2);
	cout << "嗨嗨嗨拜拜了您嘞！" << endl;
	timep(2);
	cout << "\n# End STORY4_2 #\n" << endl;
}

void showstory_End()
{
	timep(2);
	print_(14);
	cout << "|# STORY Final #  终焉时刻|";
	print_(14);
	timep(2);
	cout << "都结束了对吗？" << endl;
	timep(2);
	cout << "貌似我也没必要回去……在这里享受一会生活吧……\n" << endl;
	timep(2);
	cout << "[ 下一秒，时光扭曲…… ]" << endl;
	timep(2);
	cout << "\n# End STORY Final #\n" << endl;
}

void showstory5_1()
{
	timep(2);
	print_(13);
	cout << "|# STORY5_1 #  一念和过去|";
	print_(13);
	timep(2);
	cout << "继续向城堡深处走去。" << endl;
	timep(2);
	cout << "偌大的城堡空无一人。" << endl;
	timep(2);
	cout << "慢慢走向最深处……那里有一扇大门。" << endl;
	timep(2);
	cout << "\n1：推开大门。" << endl;
	cout << "2：转身离开。" << endl;

	int temp = 0;
	while (!(0 < temp && temp < 3))
		couin(temp);

	timep(2);
	switch (temp)
	{
	case 1:
		cout << "你推开了大门。" << endl;
		timep(2);
		cout << "大门里面，是一张现代的办公桌。" << endl;
		timep(2);
		cout << "桌上摆着的咖啡还冒着热气，文件摊开着，仿佛有人刚刚离开。" << endl;
		timep(2);
		cout << "你的视线落在了蜷缩在办公椅上的一只" << endl;
		timep(2);
		cout << "猫？" << endl;
		timep(2);
		cout << "记忆突然闪现，这不是你和大家一起养在工作室里的吗？" << endl;
		timep(2);
		cout << "桌上的咖啡，明明是你五分钟前才泡好的。" << endl;
		timep(2);
		cout << "那些文件……只有你才会这样凌乱地摊开吧。" << endl;
		timep(2);
		cout << "你猛然回头，发现你刚才打开的门后面，根本没有什么城堡。" << endl;
		timep(2);
		cout << "玻璃门外，只有清晨行人还不算多的街道。安详而又静谧" << endl;
		timep(2);
		cout << "门外一个身影推门进来了。" << endl;
		timep(2);
		cout << "[ 早啊！] 他说道。他的工牌上写着：Godspeed。" << endl;
		timep(2);
		cout << "刚才的一切仿佛没有发生过一般。" << endl;
		timep(2);
		cout << "你又回到了你熟悉的世界。" << endl;
		timep(2);
		cout << "桌上的纸条，是KringKoter留给你的吧。毕竟你已经拖了三天没有交画稿了。" << endl;
		timep(2);
		cout << "AfternoonTea……他还是那么忙碌呢。大早上就开始整理文档。" << endl;
		timep(2);
		cout << "Canvas在摸鱼，他鼠标的动作肯定不是在干活。" << endl;
		timep(2);
		cout << "真是平常而又美好的一天呢。" << endl;
		timep(2);
		cout << "你把猫猫抱在了手里，好像打扰了它睡觉，它有点炸毛。" << endl;
		timep(2);
		cout << "但不行呀，你也要工作了。" << endl;
		timep(2);
		cout << "总之不管怎样，先对它说一句：" << endl;
		timep(3);
		cout << "早安！" << endl;
		timep(2);
		cout << "# End STORY6_1 #\n\n" << endl;
		timep(2);
		cout << "# End The Game #" << endl;
		timep(2);
		cout << "Thanks for play—the preasent for my friends." << endl;
		timep(2);
		cout << "                                                                            KringKoter谨作\n";
		timep(5);
		cout << "\n\n\n";
		break;
	case 2:
		cout << "什么猫猫，肯定是骗人的吧，那个魔王不知道又在耍什么花招。" << endl;
		timep(2);
		cout << "为什么要信他，无聊。" << endl;
		timep(2);
		cout << "[ 你转身走了出去，再也没有回头。 ]" << endl;
		timep(2);
		cout << "# End STORY6_1 #\n\n" << endl;
		timep(2);
		cout << "# End The Game #" << endl;
		break;

	}
}