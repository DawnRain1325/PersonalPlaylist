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
		"물의여행","오르트구름" , "살별" ,
		"Truly" , "사건의지평선" , "Blackhole" };
		cout << "윤하 : " << dancetypeYounHa[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"느린 우체통","별의 조각" , "반짝,빛을내" ,
		"하나의 달" , "우산" , "먹구름" };
		cout << "윤하 : " << balladtypeNell[i] << endl;
	}
}
