#include "SevenTeen.h"
#include "stdafx.h"

SevenTeen::SevenTeen()
{
}

SevenTeen::~SevenTeen()
{

}

void SevenTeen::sing()
{
	for (char i = 0; i < 6; i++)
	{
		const string dancetypeSevenTeen[6] = {
		"���� �� ã�ư��� �־�","�ڼ�" , "13���� ��" ,
		"�ٶ�����" , "Flower" , "ķ�����̾�" };
		cout << "����ƾ : " << dancetypeSevenTeen[i] << endl;
	}
}
