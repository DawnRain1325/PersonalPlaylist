#include "TaeYeon.h"

#include "stdafx.h"

TaeYeon::TaeYeon()
{
	
}

TaeYeon::~TaeYeon()
{
	
}

void TaeYeon::sing()
{
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeTaeYeon[6] = {
		"��� �� �Ѹ���","���࿡" , "�鸮����" ,
		"����ΰɿ�" , "��ó��" , "ó���̾���" };
		cout << "�¿� : " << balladtypeTaeYeon[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeTaeYeon[6] = {
		"INVU","I(Feat.������Ʈ)" , "Time Lapse" ,
		"Rain" , "U R" , "FINE" };
		cout << "�¿� : " << dancetypeTaeYeon[i] << endl;
	}
}
