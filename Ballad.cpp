#include "Ballad.h"

Ballad::Ballad()
{
}

Ballad::~Ballad()
{
}

void Ballad::sing()
{
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeIU[6] = {
		"����� ȭ�� ","��ħǥ" , "������" ,
		"���� �ǹ�(Feat.��â��)" , "����" , "����" };
		cout << "������ : " << balladtypeIU[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeTaeYeon[6] = {
		"��� �� �Ѹ���","���࿡" , "�鸮����" ,
		"����ΰɿ�" , "��ó��" , "ó���̾���" };
		cout << "�¿� : " << balladtypeTaeYeon[i] << endl;
	}
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"����� �ȴ� �ð�","Ocean of Light" , "Stay" ,
		"���" , "Blue" , "�����" };
		cout << "�� : " << balladtypeNell[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"���� ��ü��","���� ����" , "��¦,������" ,
		"�ϳ��� ��" , "���" , "�Ա���" };
		cout << "���� : " << balladtypeNell[i] << endl;
	}

	for (char i = 0; i < 18; i++)
	{
		const string dancetypeJangBeomJune[18] = {
		"ù���","���� ��ٴ�" , "���� ����" ,
		"���� ��Ϳ���" , "��Ȱ�ų�" , "�ɼ��̰�" , 
		"���", "�׿� ����" , "�ҳ���" , "������ ����Ѵٸ�"
		,"���Ұ�" , "����� Ÿ�̹�" ,"ó���� ����̶���" , "�ÿ��� ����" , "�Ϳ��� ����" , "����" ,
		"��������" , "�����߸� ��"};

		cout << "�����(����Ŀ����Ŀ) : " << dancetypeJangBeomJune[i] << endl;
	}

}
