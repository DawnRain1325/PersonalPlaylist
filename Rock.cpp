#include "Rock.h"
#include "stdafx.h"

Rock::Rock()
{
}

Rock::~Rock()
{
}


void Rock::sing()
{

	for (char i = 0; i < 10; i++)
	{


		const string RocktypeQWER[10] = {
		"����ߵ�","Discord","���� �ϸ��", "�������� ���̾" , 
		"��������" , "���϶�" , "SODA", "�Ҳɳ���" , 
		"�������" , "��������"};
		cout << "QWER : " << RocktypeQWER[i] << endl;
	}



	for (char i = 0; i < 7; i++)
	{


		const string RockStrayKids[7] = {
		"��(ե LALALA)","Ư(S-Class)" , "CASE-143" ,
		"MANIAC" , "BlackDoor" , "TOP","MIROH"};
		cout << "��Ʈ���� Ű�� : " << RockStrayKids[i] << endl;
	}

}