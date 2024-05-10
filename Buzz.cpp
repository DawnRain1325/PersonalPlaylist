#include "Buzz.h"
#include "stdafx.h"

Buzz::Buzz()
{
}

Buzz::~Buzz()
{
	
}

void Buzz::sing()
{
	for (char i = 0; i < 6; i++)
	{
		const string dancetypeBuzz[6] = {
		"나에게로 떠나는 여행","활주" , "13월의 춤" ,
		"남자를 몰라" , "가시" , "캠프파이어" };
		cout << "버즈 : " << dancetypeBuzz[i] << endl;
	}
}
