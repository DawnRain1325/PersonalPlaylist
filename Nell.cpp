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
		"����� �ȴ� �ð�","Ocean of Light" , "Stay" ,
		"���" , "Blue" , "�����" };
		cout << "�� : " << balladtypeNell[i] << endl;
	}
}
