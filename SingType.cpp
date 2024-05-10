#include "SingType.h"

string A = "좋은날", B, C, D, E, F;


string singername = "아이유";
 

SingType::SingType()
{
}

SingType::~SingType()
{

}

void SingType::sing()
{

	
	for (char i = 0; i < 6; i++)
	{
		

		const string dancetype[6] = {
		A,B,C,D,E,F };
		cout << singername << dancetype[i] << endl;
	}
	
}
