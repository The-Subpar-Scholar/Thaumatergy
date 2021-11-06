#pragma once
#include <cstdint>
struct AtkParam_Npc {
    float Hit0_Radius;
    float Hit1_Radius;
    float Hit2_Radius;
    float Hit3_Radius;
    float KnockbackDist;
    float HitStopTime;
    int SpecialEffectId0;
    int SpecialEffectId1;
    int SpecialEffectId2;
    int SpecialEffectId3;
    int SpecialEffectId4;
    short Hit0_DmyPoly1;
    short Hit1_DmyPoly1;
    short Hit2_DmyPoly1;
    short Hit3_DmyPoly1;
    short Hit0_DmyPoly2;
    short Hit1_DmyPoly2;
    short Hit2_DmyPoly2;
    short Hit3_DmyPoly2;
    short BlowingCorrection;
    short AtkPhysCorrection;
    short AtkMagCorrection;
    short AtkFireCorrection;
    short AtkThunCorrection;
    short AtkStamCorrection;
    short GuardAtkRateCorrection;
    short GuardBreakCorrection;
    short AtkThrowEscapeCorrection;
    short AtkSuperArmorCorrection;
    short AtkPhys;
    short AtkMag;
    short AtkFire;
    short AtkThun;
    short AtkStam;
    short GuardAtkRate;
    short GuardBreakRate;
    short AtkSuperArmor;
    short AtkThrowEscape;
    short AtkObj;
    short GuardStaminaCutRate;
    short GuardRate;
    short ThrowTypeId;
    int8_t Hit0_hitType;
    int8_t Hit1_hitType;
    int8_t Hit2_hitType;
    int8_t Hit3_hitType;
    int8_t hit0_Priority;
    int8_t hit1_Priority;
    int8_t hit2_Priority;
    int8_t hit3_Priority;
    int8_t DamageLevel;
    int8_t MapHitType;
    int8_t GuardCutCancelRate;
    int8_t AtkAttribute;
    int8_t SpAttribute;
    int8_t AttackType;
    int8_t AtkMaterial;
    int8_t AtkSize;
    int8_t DefMaterial;
    int8_t DefSfxMaterial;
    int8_t HitSourceType;
    int8_t ThrowFlag;
private:
    bool memBuffer1 : 2;
public:
    bool isEffectDisabled : 4;                             // bit offset +2
private:
public:
    bool DoubleDamage : 1;                                 // bit offset +6
    bool :0;
private:
    int8_t _0x7E;
    int8_t _0x7F;
    int8_t _0x80;
public:
    bool isHitboxEnabled : 1;                              // bit offset +0
    bool isHitBothTeams : 1;                               // bit offset +1
    bool isSelfHit : 1;                                    // bit offset +2
private:
    int8_t _0x82;
    int8_t _0x83;
    int8_t _0x84;
    int8_t _0x85;
    int8_t _0x86;
    int8_t _0x87;
    int8_t _0x88;
    int8_t _0x89;
    int8_t _0x8A;
    int8_t _0x8B;
    int8_t _0x8C;
    int8_t _0x8D;
    int8_t _0x8E;
    int8_t _0x8F;
    int8_t _0x90;
    int8_t _0x91;
    int8_t _0x92;
    int8_t _0x93;
    int8_t _0x94;
    int8_t _0x95;
    int8_t _0x96;
    int8_t _0x97;
public:
    int CameraActOnHit;
    int ThrowCameraAct;
};