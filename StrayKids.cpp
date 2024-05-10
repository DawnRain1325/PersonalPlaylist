#include "StrayKids.h"
#include "stdafx.h"

StrayKids::StrayKids()
{
}

StrayKids::~StrayKids()
{


}

void StrayKids::sing()
{
	for (char i = 0; i < 7; i++)
	{


		const string RockStrayKids[7] = {
		"락(樂 LALALA)","특(S-Class)" , "CASE-143" ,
		"MANIAC" , "BlackDoor" , "TOP","MIROH" };
		cout << "스트레이 키즈 : " << RockStrayKids[i] << endl;
	}
}
