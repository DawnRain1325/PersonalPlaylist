#pragma once
#include "Dance.h"
#include "stdafx.h"



Dance::Dance()
{

}

Dance::~Dance()


{
}

void Dance::sing()
{

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeIU[6] = {
		"좋은 날 ","내 손을 잡아" , "Blueming" ,
		"스물셋" , "하루 끝" , "Seceret(비밀)" };
		cout << "아이유 : " << dancetypeIU[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeTaeYeon[6] = {
		"INVU","I(Feat.버벌진트)" , "Time Lapse" ,
		"Rain" , "U R" , "FINE" };
		cout << "태연 : " << dancetypeTaeYeon[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeYounHa[6] = {
		"물의여행","오르트구름" , "살별" ,
		"Truly" , "사건의지평선" , "Blackhole" };
		cout << "윤하 : " << dancetypeYounHa[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{
		const string dancetypeSevenTeen[6] = {
		"지금 널 찾아가고 있어","박수" , "13월의 춤" ,
		"바람개비" , "Flower" , "캠프파이어" };
		cout << "세븐틴 : " << dancetypeSevenTeen[i] << endl;
	}


	for (char i = 0; i < 6; i++)
	{
		const string dancetypeBuzz[6] = {
		"나에게로 떠나는 여행","활주" , "13월의 춤" ,
		"남자를 몰라" , "가시" , "캠프파이어" };
		cout << "버즈 : " << dancetypeBuzz[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{
		const string dancetypeNewjeans[6] = {
		"Bubble_Gum","OMG" , "Attention" ,
		"Gods" , "Get up" , "ETA" };
		cout << "뉴진스 : " << dancetypeNewjeans[i] << endl;
	}

	for (char i = 0; i < 10; i++)
	{
		const string dancetypePsy[10] = {
		"예술이야","나팔바지" , "챔피언" ,
		"어땠을까" , "낙원" , "Rightnow" , "Gentleman", "강남스타일" , "연예인" , "Daddy"};
		cout << "싸이 : " << dancetypePsy[i] << endl;
	}
	

}
