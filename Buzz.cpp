#include "Buzz.h"
#include "stdafx.h"

Buzz::Buzz()
{
}

Buzz::~Buzz()
{
	
}

void Buzz::sing()
{
	for (char i = 0; i < 6; i++)
	{
		const string dancetypeBuzz[6] = {
		"�����Է� ������ ����","Ȱ��" , "13���� ��" ,
		"���ڸ� ����" , "����" , "ķ�����̾�" };
		cout << "���� : " << dancetypeBuzz[i] << endl;
	}
}
