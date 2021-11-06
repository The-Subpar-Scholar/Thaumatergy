//
// Created by ojgpr on 2021-11-02.
//

#pragma once
#include <cstdint>


struct Stats { //BaseB, 80, XA, D8
    int HP; //D8
    int MaxHP;
    int BaseMaxHP;
    int MP;
    int MaxMP;
    int BaseMaxMP;
    int SP;
    int MaxSP;
    int BaseMaxSP;
};

struct Attributes { //BaseB, 80, XA, 1ED
    int Poison;
    int Toxic;
    int Bleed;
    int Curse;
    int Frost;
    int PoisonMax;
    int ToxicMax;
    int BleedMax;
    int CurseMax;
    int FrostMax;
};