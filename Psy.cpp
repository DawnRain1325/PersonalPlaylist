#include "Psy.h"
#include "stdafx.h"

Psy::Psy()
{
}

Psy::~Psy()
{
	

}

void Psy::sing()
{
	for (char i = 0; i < 10; i++)
	{
		const string dancetypePsy[10] = {
		"�����̾�","���ȹ���" , "è�Ǿ�" ,
		"�����" , "����" , "Rightnow" , "Gentleman", "������Ÿ��" , "������" , "Daddy" };
		cout << "���� : " << dancetypePsy[i] << endl;
	}
}
