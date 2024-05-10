#include "Nell.h"
#include "stdafx.h"

Nell::Nell()
{
}

Nell::~Nell()
{

}

void Nell::sing()
{
	for (char i = 0; i < 6; i++)
	{


		const string balladtypeNell[6] = {
		"±â¾ïÀ» °È´Â ½Ã°£","Ocean of Light" , "Stay" ,
		"¹é¾ß" , "Blue" , "Èñ¸Á°í¹®" };
		cout << "³Ú : " << balladtypeNell[i] << endl;
	}
}
