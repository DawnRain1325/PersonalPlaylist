#include "JangBeomJun.h"
#include "stdafx.h"

JangBeomJun::JangBeomJun()
{
}

JangBeomJun::~JangBeomJun()
{

}

void JangBeomJun::sing()
{
	for (char i = 0; i < 18; i++)
	{
		const string dancetypeJangBeomJune[18] = {
		"ù���","���� ��ٴ�" , "���� ����" ,
		"���� ��Ϳ���" , "��Ȱ�ų�" , "�ɼ��̰�" ,
		"���", "�׿� ����" , "�ҳ���" , "������ ����Ѵٸ�"
		,"���Ұ�" , "����� Ÿ�̹�" ,"ó���� ����̶���" , "�ÿ��� ����" , "�Ϳ��� ����" , "����" ,
		"��������" , "�����߸� ��" };

		cout << "�����(����Ŀ����Ŀ) : " << dancetypeJangBeomJune[i] << endl;
	}
}
