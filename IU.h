#pragma once
#include "Singer.h"
#include "stdafx.h"
class IU :
    public Singer
{
public:
    IU();
    ~IU();

    
   //void CatchMyhand();
    void sing();

    string danceIU[5] = { "�����1","�����2","�����3","�����4","�����5" };

    string ballad[5] = { "�����1","�����2","�����3","�����4","�����5" };
};

