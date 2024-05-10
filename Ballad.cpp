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
		"비밀의 화원 ","마침표" , "밤편지" ,
		"너의 의미(Feat.김창완)" , "마음" , "무릎" };
		cout << "아이유 : " << balladtypeIU[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeTaeYeon[6] = {
		"사랑 그 한마디","만약에" , "들리나요" ,
		"사랑인걸요" , "별처럼" , "처음이었죠" };
		cout << "태연 : " << balladtypeTaeYeon[i] << endl;
	}
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"기억을 걷는 시간","Ocean of Light" , "Stay" ,
		"백야" , "Blue" , "희망고문" };
		cout << "넬 : " << balladtypeNell[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"느린 우체통","별의 조각" , "반짝,빛을내" ,
		"하나의 달" , "우산" , "먹구름" };
		cout << "윤하 : " << balladtypeNell[i] << endl;
	}

	for (char i = 0; i < 18; i++)
	{
		const string dancetypeJangBeomJune[18] = {
		"첫사랑","여수 밤바다" , "벚꽃 엔딩" ,
		"골목길 어귀에서" , "전활거네" , "꽃송이가" , 
		"향수", "네온 사인" , "소나기" , "정말로 사랑한다면"
		,"잘할걸" , "사랑은 타이밍" ,"처음엔 사랑이란게" , "시원한 여자" , "귀여운 여자" , "봄비" ,
		"빗속으로" , "떠나야만 해"};

		cout << "장범준(버스커버스커) : " << dancetypeJangBeomJune[i] << endl;
	}

}
