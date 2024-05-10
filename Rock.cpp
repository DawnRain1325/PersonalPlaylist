#include "Rock.h"
#include "stdafx.h"

Rock::Rock()
{
}

Rock::~Rock()
{
}


void Rock::sing()
{

	for (char i = 0; i < 10; i++)
	{


		const string RocktypeQWER[10] = {
		"고민중독","Discord","별의 하모니", "수수께끼 다이어리" , 
		"자유선언" , "마니또" , "SODA", "불꽃놀이" , 
		"대관람차" , "지구정복"};
		cout << "QWER : " << RocktypeQWER[i] << endl;
	}



	for (char i = 0; i < 7; i++)
	{


		const string RockStrayKids[7] = {
		"락(樂 LALALA)","특(S-Class)" , "CASE-143" ,
		"MANIAC" , "BlackDoor" , "TOP","MIROH"};
		cout << "스트레이 키즈 : " << RockStrayKids[i] << endl;
	}

}