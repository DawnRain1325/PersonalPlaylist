#include "YounHa.h"
#include "stdafx.h"

YounHa::YounHa()
{
}

YounHa::~YounHa()
{
	
}

void YounHa::sing()
{
	for (char i = 0; i < 6; i++)
	{


		const string dancetypeYounHa[6] = {
		"���ǿ���","����Ʈ����" , "�캰" ,
		"Truly" , "���������" , "Blackhole" };
		cout << "���� : " << dancetypeYounHa[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"���� ��ü��","���� ����" , "��¦,������" ,
		"�ϳ��� ��" , "���" , "�Ա���" };
		cout << "���� : " << balladtypeNell[i] << endl;
	}
}
