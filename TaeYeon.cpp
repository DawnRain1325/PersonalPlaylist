#include "TaeYeon.h"

#include "stdafx.h"

TaeYeon::TaeYeon()
{
	
}

TaeYeon::~TaeYeon()
{
	
}

void TaeYeon::sing()
{
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeTaeYeon[6] = {
		"사랑 그 한마디","만약에" , "들리나요" ,
		"사랑인걸요" , "별처럼" , "처음이었죠" };
		cout << "태연 : " << balladtypeTaeYeon[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeTaeYeon[6] = {
		"INVU","I(Feat.버벌진트)" , "Time Lapse" ,
		"Rain" , "U R" , "FINE" };
		cout << "태연 : " << dancetypeTaeYeon[i] << endl;
	}
}
