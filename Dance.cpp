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
		"���� �� ","�� ���� ���" , "Blueming" ,
		"������" , "�Ϸ� ��" , "Seceret(���)" };
		cout << "������ : " << dancetypeIU[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeTaeYeon[6] = {
		"INVU","I(Feat.������Ʈ)" , "Time Lapse" ,
		"Rain" , "U R" , "FINE" };
		cout << "�¿� : " << dancetypeTaeYeon[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{


		const string dancetypeYounHa[6] = {
		"���ǿ���","����Ʈ����" , "�캰" ,
		"Truly" , "���������" , "Blackhole" };
		cout << "���� : " << dancetypeYounHa[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{
		const string dancetypeSevenTeen[6] = {
		"���� �� ã�ư��� �־�","�ڼ�" , "13���� ��" ,
		"�ٶ�����" , "Flower" , "ķ�����̾�" };
		cout << "����ƾ : " << dancetypeSevenTeen[i] << endl;
	}


	for (char i = 0; i < 6; i++)
	{
		const string dancetypeBuzz[6] = {
		"�����Է� ������ ����","Ȱ��" , "13���� ��" ,
		"���ڸ� ����" , "����" , "ķ�����̾�" };
		cout << "���� : " << dancetypeBuzz[i] << endl;
	}

	for (char i = 0; i < 6; i++)
	{
		const string dancetypeNewjeans[6] = {
		"Bubble_Gum","OMG" , "Attention" ,
		"Gods" , "Get up" , "ETA" };
		cout << "������ : " << dancetypeNewjeans[i] << endl;
	}

	for (char i = 0; i < 10; i++)
	{
		const string dancetypePsy[10] = {
		"�����̾�","���ȹ���" , "è�Ǿ�" ,
		"�����" , "����" , "Rightnow" , "Gentleman", "������Ÿ��" , "������" , "Daddy"};
		cout << "���� : " << dancetypePsy[i] << endl;
	}
	

}
