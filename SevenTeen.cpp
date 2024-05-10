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
		"지금 널 찾아가고 있어","박수" , "13월의 춤" ,
		"바람개비" , "Flower" , "캠프파이어" };
		cout << "세븐틴 : " << dancetypeSevenTeen[i] << endl;
	}
}
