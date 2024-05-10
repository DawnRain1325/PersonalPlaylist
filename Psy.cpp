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
		"예술이야","나팔바지" , "챔피언" ,
		"어땟을까" , "낙원" , "Rightnow" , "Gentleman", "강남스타일" , "연예인" , "Daddy" };
		cout << "싸이 : " << dancetypePsy[i] << endl;
	}
}
