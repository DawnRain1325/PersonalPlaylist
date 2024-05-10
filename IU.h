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

    string danceIU[5] = { "실험용1","실험용2","실험용3","실험용4","실험용5" };

    string ballad[5] = { "실험용1","실험용2","실험용3","실험용4","실험용5" };
};

