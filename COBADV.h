#pragma once
#ifndef COBADV_
#define COBADV_

void couin(int& a);

//显示自己和敌人信息
void showIf(const Hero& player, const Boss& boss);
void showIf(const Hero& player, const com_enem& boss);
void showmenu(Hero& player);
void showenem(com_enem& enem);
void showboss(Boss& boss);

void timep(int n = 1);
void print_(int n = 17);
int tital();

//玩家行动，Boss及敌人行动
int playAct_boss(Hero& player, Boss& boss);    //对boss操作
int playAct_com_enem(Hero& player, com_enem& enem);  //对普通敌人操作
int bossAct(Hero& player, Boss& boss);     //boss
int enermyAct(Hero& player, com_enem& enem);    //普通敌人

int common_enermy_meet1(Hero& player);     //随机遇敌
int common_enermy_meet2(Hero& player);
int common_enermy_meet3(Hero& player);

//随机获得血瓶
void getAmmo(Hero& player);
void getHealBot(Hero& player);

//故事文本
void eatline();

void showstory1_1();
void showstory1_2(Hero& player);
int showstory2_1();
void showstory2_2();
void showstory2_0();
void showstory2_3();
void showstory2_4();
void showstory3_1();
void showstory4_1();
void showstory4_2();
void showstory_End();
void showstory5_1();

//战斗函数
int fight_Boss(Hero& player1, Boss& KRING);
int fight_enem(Hero& player1, com_enem& KRING);

int fight_com1(Hero& player1, int i);

//数据IO
bool filer();
void filew(Hero& player);
#endif // !1

