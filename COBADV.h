#pragma once
#ifndef COBADV_
#define COBADV_

void couin(int& a);

//��ʾ�Լ��͵�����Ϣ
void showIf(const Hero& player, const Boss& boss);
void showIf(const Hero& player, const com_enem& boss);
void showmenu(Hero& player);
void showenem(com_enem& enem);
void showboss(Boss& boss);

void timep(int n = 1);
void print_(int n = 17);
int tital();

//����ж���Boss�������ж�
int playAct_boss(Hero& player, Boss& boss);    //��boss����
int playAct_com_enem(Hero& player, com_enem& enem);  //����ͨ���˲���
int bossAct(Hero& player, Boss& boss);     //boss
int enermyAct(Hero& player, com_enem& enem);    //��ͨ����

int common_enermy_meet1(Hero& player);     //�������
int common_enermy_meet2(Hero& player);
int common_enermy_meet3(Hero& player);

//������Ѫƿ
void getAmmo(Hero& player);
void getHealBot(Hero& player);

//�����ı�
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

//ս������
int fight_Boss(Hero& player1, Boss& KRING);
int fight_enem(Hero& player1, com_enem& KRING);

int fight_com1(Hero& player1, int i);

//����IO
bool filer();
void filew(Hero& player);
#endif // !1

