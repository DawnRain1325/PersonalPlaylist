#include "QWER.h"
#include "stdafx.h"

QWER::QWER()
{
}

QWER::~QWER()
{

}

void QWER::sing()
{
	for (char i = 0; i < 10; i++)
	{


		const string RocktypeQWER[10] = {
		"����ߵ�","Discord","���� �ϸ��", "�������� ���̾" ,
		"��������" , "���϶�" , "SODA", "�Ҳɳ���" ,
		"�������" , "��������" };
		cout << "QWER : " << RocktypeQWER[i] << endl;
	}
}
