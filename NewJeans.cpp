#include "NewJeans.h"
#include "stdafx.h"

NewJeans::NewJeans()
{
}

NewJeans::~NewJeans()
{

}

void NewJeans::sing()
{
	for (char i = 0; i < 6; i++)
	{
		const string dancetypeNewjeans[6] = {
		"Bubble","OMG" , "Attention" ,
		"Gods" , "Get up" , "ETA" };
		cout << "´ºÁø½º : " << dancetypeNewjeans[i] << endl;
	}
}
