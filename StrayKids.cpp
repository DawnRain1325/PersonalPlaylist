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
		"��(ե LALALA)","Ư(S-Class)" , "CASE-143" ,
		"MANIAC" , "BlackDoor" , "TOP","MIROH" };
		cout << "��Ʈ���� Ű�� : " << RockStrayKids[i] << endl;
	}
}
