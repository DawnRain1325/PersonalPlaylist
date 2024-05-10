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
		"첫사랑","여수 밤바다" , "벚꽃 엔딩" ,
		"골목길 어귀에서" , "전활거네" , "꽃송이가" ,
		"향수", "네온 사인" , "소나기" , "정말로 사랑한다면"
		,"잘할걸" , "사랑은 타이밍" ,"처음엔 사랑이란게" , "시원한 여자" , "귀여운 여자" , "봄비" ,
		"빗속으로" , "떠나야만 해" };

		cout << "장범준(버스커버스커) : " << dancetypeJangBeomJune[i] << endl;
	}
}
