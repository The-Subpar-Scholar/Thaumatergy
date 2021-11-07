//generated by James's shit Python script
#pragma once
#include <cstdint>
struct SpEffectParam {
    static const wchar_t* name;
    struct data {                                                   
        int iconId;                                           
        float conditionHp;                                      
        float effectEndurance;                                  
        float motionInterval;                                   
        float maxHpRate;                                        
        float maxMpRate;                                        
        float maxStaminaRate;                                   
        float slashDamageCutRate;                               
        float blowDamageCutRate;                                
        float thrustDamageCutRate;                              
        float neutralDamageCutRate;                             
        float magicDamageCutRate;                               
        float fireDamageCutRate;                                
        float thunderDamageCutRate;                             
        float physicsAttackRate;                                
        float magicAttackRate;                                  
        float fireAttackRate;                                   
        float thunderAttackRate;                                
        float physicsAttackPowerRate;                           
        float magicAttackPowerRate;                             
        float fireAttackPowerRate;                              
        float thunderAttackPowerRate;                           
        int physicsAttackPower;                               
        int magicAttackPower;                                 
        int fireAttackPower;                                  
        int thunderAttackPower;                               
        float physicsDiffenceRate;                              
        float magicDiffenceRate;                                
        float fireDiffenceRate;                                 
        float thunderDiffenceRate;                              
        int physicsDiffence;                                  
        int magicDiffence;                                    
        int fireDiffence;                                     
        int thunderDiffence;                                  
        float noGuardDamageRate;                                
        float vitalSpotChangeRate;                              
        float normalSpotChangeRate;                             
        float maxHpChangeRate;                                  
        int behaviorId;                                       
        float changeHpRate;                                     
        int changeHpPoint;                                    
        float changeMpRate;                                     
        int changeMpPoint;                                    
        int mpRecoverChangeSpeed;                             
        float changeStaminaRate;                                
        int changeStaminaPoint;                               
        int staminaRecoverChangeSpeed;                        
        float magicEffectTimeChange;                            
        int insideDurability;                                 
        int maxDurability;                                    
        float staminaAttackRate;                                
        int poizonAttackPower;                                
        int registIllness;                                    
        int registBlood;                                      
        int registCurse;                                      
        float fallDamageRate;                                   
        float soulRate;                                         
        float equipWeightChangeRate;                            
        float allItemWeightChangeRate;                          
        int soul;                                             
        int animIdOffset;                                     
        float haveSoulRate;                                     
        float targetPriority;                                   
        int sightSearchEnemyCut;                              
        float hearingSearchEnemyCut;                            
        float grabityRate;                                      
        float registPoizonChangeRate;                           
        float registIllnessChangeRate;                          
        float registBloodChangeRate;                            
        float registCurseChangeRate;                            
        float soulStealRate;                                    
        float lifeReductionRate;                                
        float hpRecoverRate;                                    
        int replaceSpEffectId;                                
        int cycleOccurrenceSpEffectId;                        
        int atkOccurrenceSpEffectId;                          
        float guardDefFlickPowerRate;                           
        float guardStaminaCutRate;                              
        short rayCastPassedTime;                                
        short changeSuperArmorPoint;                            
        short bowDistRate;                                      
        short spCategory;                                       
        int8_t categoryPriority;                                 
        int8_t saveCategory;                                     
        int8_t changeMagicSlot;                                  
        int8_t changeMiracleSlot;                                
        int8_t heroPointDamage;                                  
        int8_t defFlickPower;                                    
        int8_t flickDamageCutRate;                               
        int8_t bloodDamageRate;                                  
        int8_t dmgLv_None;                                       
        int8_t dmgLv_S;                                          
        int8_t dmgLv_M;                                          
        int8_t dmgLv_L;                                          
        int8_t dmgLv_BlowM;                                      
        int8_t dmgLv_Push;                                       
        int8_t dmgLv_Strike;                                     
        int8_t dmgLv_BlowS;                                      
        int8_t dmgLv_Min;                                        
        int8_t dmgLv_Uppercut;                                   
        int8_t dmgLv_BlowLL;                                     
        int8_t dmgLv_Breath;                                     
        int8_t atkAttribute;                                     
        int8_t spAttribute;                                      
        short stateInfo;                                        
        int8_t wepParamChange;                                   
        int8_t moveType;                                         
        int8_t lifeReductionType;                                
    private:
        int8_t _0x15B;
public:
        int8_t throwCondition;                                   
        int8_t addBehaviorJudgeId_condition;                     
        int8_t addBehaviorJudgeId_add;                           
        bool TargetSelf : 1;                                   // bit offset +0
        bool TargetFriend : 1;                                 // bit offset +1
        bool TargetEnemy : 1;                                  // bit offset +2
        bool TargetPlayer : 1;                                 // bit offset +3
        bool TargetAI : 1;                                     // bit offset +4
        bool TargetLive : 1;                                   // bit offset +5
        bool TargetGhost : 1;                                  // bit offset +6
        bool TargetWhiteGhost : 1;                             // bit offset +7
        bool :0;
        bool TargetBlackGhost : 1;                             // bit offset +0
        bool TargetAttacker : 1;                               // bit offset +1
        bool DispIconNonactive : 1;                            // bit offset +2
        bool useSpEffectEffect : 1;                            // bit offset +3
        bool bAdjustMagicAblity : 1;                           // bit offset +4
        bool bAdjustFaithAblity : 1;                           // bit offset +5
        bool bGameClearBonus : 1;                              // bit offset +6
        bool magParamChange : 1;                               // bit offset +7
        bool :0;
        bool miracleParamChange : 1;                           // bit offset +0
        bool clearSoul : 1;                                    // bit offset +1
        bool requestSOS : 1;                                   // bit offset +2
        bool requestBlackSOS : 1;                              // bit offset +3
        bool requestForceJoinBlackSOS : 1;                     // bit offset +4
        bool requestKickSession : 1;                           // bit offset +5
        bool requestLeaveSession : 1;                          // bit offset +6
        bool requestNpcInveda : 1;                             // bit offset +7
        bool :0;
        bool noDead : 1;                                       // bit offset +0
        bool bCurrHPIndependeMaxHP : 1;                        // bit offset +1
        bool corrosionIgnore : 1;                              // bit offset +2
        bool sightSearchCutIgnore : 1;                         // bit offset +3
        bool hearingSearchCutIgnore : 1;                       // bit offset +4
        bool antiMagicIgnore : 1;                              // bit offset +5
        bool fakeTargetIgnore : 1;                             // bit offset +6
        bool fakeTargetIgnoreUndead : 1;                       // bit offset +7
        bool :0;
        bool fakeTargetIgnoreAnimal : 1;                       // bit offset +0
        bool grabityIgnore : 1;                                // bit offset +1
        bool disablePoison : 1;                                // bit offset +2
        bool disableDisease : 1;                               // bit offset +3
        bool disableBlood : 1;                                 // bit offset +4
        bool disableCurse : 1;                                 // bit offset +5
        bool enableCharm : 1;                                  // bit offset +6
        bool enableLifeTime : 1;                               // bit offset +7
        bool :0;
        bool hasTarget : 1;                                    // bit offset +0
        bool isFireDamageCancel : 1;                           // bit offset +1
        bool isExtendSpEffectLife : 1;                         // bit offset +2
        bool requestLeaveColiseumSession : 1;                  // bit offset +3
        bool :0;
        bool vowType0 : 1;                                     // bit offset +0
        bool vowType1 : 1;                                     // bit offset +1
        bool vowType2 : 1;                                     // bit offset +2
        bool vowType3 : 1;                                     // bit offset +3
        bool vowType4 : 1;                                     // bit offset +4
        bool vowType5 : 1;                                     // bit offset +5
        bool vowType6 : 1;                                     // bit offset +6
        bool vowType7 : 1;                                     // bit offset +7
        bool :0;
        bool vowType8 : 1;                                     // bit offset +0
        bool vowType9 : 1;                                     // bit offset +1
        bool vowType10 : 1;                                    // bit offset +2
        bool vowType11 : 1;                                    // bit offset +3
        bool vowType12 : 1;                                    // bit offset +4
        bool vowType13 : 1;                                    // bit offset +5
        bool vowType14 : 1;                                    // bit offset +6
        bool vowType15 : 1;                                    // bit offset +7
        bool :0;
    private:
        int8_t _0x167;
        int8_t _0x168;
        int8_t _0x169;
        int8_t _0x16A;
        int8_t _0x16B;
    public:
        bool effectTargetOpposeTarget : 1;                     // bit offset +0
        bool effectTargetFriendlyTarget : 1;                   // bit offset +1
        bool effectTargetSelfTarget : 1;                       // bit offset +2
    private:
        int8_t _0x16D;
public:
        int8_t behaviorFireFrom;                                 
    private:
        int8_t _0x16F;
public:
        int effectSfx;                                        
        int triggerEffect;                                    
        int triggerRequirement;                               
    private:
        int8_t _0x17C;
        int8_t _0x17D;
        int8_t _0x17E;
        int8_t _0x17F;
        int8_t _0x180;
        int8_t _0x181;
        int8_t _0x182;
        int8_t _0x183;
        int8_t _0x184;
        int8_t _0x185;
        int8_t _0x186;
        int8_t _0x187;
        int8_t _0x188;
        int8_t _0x189;
        int8_t _0x18A;
        int8_t _0x18B;
        int8_t _0x18C;
        int8_t _0x18D;
        int8_t _0x18E;
        int8_t _0x18F;
    public:
        int effectSfx1;                                       
    private:
        int8_t _0x194;
        int8_t _0x195;
        int8_t _0x196;
        int8_t _0x197;
        int8_t _0x198;
        int8_t _0x199;
        int8_t _0x19A;
        int8_t _0x19B;
        int8_t _0x19C;
        int8_t _0x19D;
        int8_t _0x19E;
        int8_t _0x19F;
        int8_t _0x1A0;
        int8_t _0x1A1;
        int8_t _0x1A2;
        int8_t _0x1A3;
        int8_t _0x1A4;
        int8_t _0x1A5;
        int8_t _0x1A6;
        int8_t _0x1A7;
        int8_t _0x1A8;
        int8_t _0x1A9;
        int8_t _0x1AA;
        int8_t _0x1AB;
    public:
        int registFrost;                                      
    private:
        int8_t _0x1B0;
        int8_t _0x1B1;
        int8_t _0x1B2;
        int8_t _0x1B3;
        int8_t _0x1B4;
        int8_t _0x1B5;
        int8_t _0x1B6;
        int8_t _0x1B7;
        int8_t _0x1B8;
        int8_t _0x1B9;
        int8_t _0x1BA;
        int8_t _0x1BB;
        int8_t _0x1BC;
        int8_t _0x1BD;
        int8_t _0x1BE;
        int8_t _0x1BF;
        int8_t _0x1C0;
        int8_t _0x1C1;
        int8_t _0x1C2;
        int8_t _0x1C3;
        int8_t _0x1C4;
        int8_t _0x1C5;
        int8_t _0x1C6;
        int8_t _0x1C7;
        int8_t _0x1C8;
        int8_t _0x1C9;
        int8_t _0x1CA;
        int8_t _0x1CB;
        int8_t _0x1CC;
        int8_t _0x1CD;
        int8_t _0x1CE;
        int8_t _0x1CF;
        int8_t _0x1D0;
        int8_t _0x1D1;
        int8_t _0x1D2;
        int8_t _0x1D3;
    public:
        float darkDamageCutRate;                                
        float darkDiffenceRate;                                 
        float darkDiffence;                                     
    private:
        float _0x1E0;
public:
        float darkAttackPowerRate;                              
        int darkAttackPower;                                  
    private:
        int8_t _0x1EC;
        int8_t _0x1ED;
        int8_t _0x1EE;
        int8_t _0x1EF;
        int8_t _0x1F0;
        int8_t _0x1F1;
        int8_t _0x1F2;
        int8_t _0x1F3;
        int8_t _0x1F4;
        int8_t _0x1F5;
        int8_t _0x1F6;
        int8_t _0x1F7;
        int8_t _0x1F8;
        int8_t _0x1F9;
        int8_t _0x1FA;
        int8_t _0x1FB;
    public:
        float itemDiscovery;                                    
    private:
        int8_t _0x200;
        int8_t _0x201;
        int8_t _0x202;
        int8_t _0x203;
        int8_t _0x204;
        int8_t _0x205;
        int8_t _0x206;
        int8_t _0x207;
        int8_t _0x208;
        int8_t _0x209;
        int8_t _0x20A;
        int8_t _0x20B;
        int8_t _0x20C;
        int8_t _0x20D;
        int8_t _0x20E;
        int8_t _0x20F;
        int8_t _0x210;
        int8_t _0x211;
        int8_t _0x212;
        int8_t _0x213;
        int8_t _0x214;
        int8_t _0x215;
        int8_t _0x216;
        int8_t _0x217;
        int8_t _0x218;
        int8_t _0x219;
        int8_t _0x21A;
        int8_t _0x21B;
        int8_t _0x21C;
        int8_t _0x21D;
        int8_t _0x21E;
        int8_t _0x21F;
        int8_t _0x220;
        int8_t _0x221;
        int8_t _0x222;
        int8_t _0x223;
        int8_t _0x224;
        int8_t _0x225;
        int8_t _0x226;
        int8_t _0x227;
        int8_t _0x228;
        int8_t _0x229;
        int8_t _0x22A;
        int8_t _0x22B;
        int8_t _0x22C;
        int8_t _0x22D;
        int8_t _0x22E;
        int8_t _0x22F;
        int8_t _0x230;
        int8_t _0x231;
        int8_t _0x232;
        int8_t _0x233;
        int8_t _0x234;
        int8_t _0x235;
        int8_t _0x236;
        int8_t _0x237;
        int8_t _0x238;
        int8_t _0x239;
        int8_t _0x23A;
        int8_t _0x23B;
        int8_t _0x23C;
        int8_t _0x23D;
        int8_t _0x23E;
        int8_t _0x23F;
        int8_t _0x240;
        int8_t _0x241;
        int8_t _0x242;
        int8_t _0x243;
        int8_t _0x244;
        int8_t _0x245;
        int8_t _0x246;
        int8_t _0x247;
        int8_t _0x248;
        int8_t _0x249;
        int8_t _0x24A;
        int8_t _0x24B;
        int8_t _0x24C;
        int8_t _0x24D;
        int8_t _0x24E;
        int8_t _0x24F;
        int8_t _0x250;
        int8_t _0x251;
        int8_t _0x252;
        int8_t _0x253;
        int8_t _0x254;
        int8_t _0x255;
        int8_t _0x256;
        int8_t _0x257;
        int8_t _0x258;
        int8_t _0x259;
        int8_t _0x25A;
        int8_t _0x25B;
        int8_t _0x25C;
        int8_t _0x25D;
        int8_t _0x25E;
        int8_t _0x25F;
        int8_t _0x260;
        int8_t _0x261;
        int8_t _0x262;
        int8_t _0x263;
        int8_t _0x264;
        int8_t _0x265;
        int8_t _0x266;
        int8_t _0x267;
    public:
        float pvpAbsorbtionPhys;                                
        float pvpAbsorbtionMag;                                 
        float pvpAbsorbtionFire;                                
        float pvpAbsorbtionThun;                                
        float pvpAbsorbtionDark;                                
        float pveAbsorbtionPhys;                                
        float pveAbsorbtionMag;                                 
        float pveAbsorbtionFire;                                
        float pveAbsorbtionThun;                                
        float pveAbsorbtionDark;                                
    private:
        float _0x290;
public:
        float pvpAttackPhys;                                    
        float pvpAttackMag;                                     
        float pvpAttackFire;                                    
        float pvpAttackThun;                                    
        float pvpAttackDark;                                    
        float pveAttackPhys;                                    
        float pveAttackMag;                                     
        float pveAttackFire;                                    
        float pveAttackThun;                                    
        float pveAttackDark;                                    
        int registFrostChange;                                
    private:
        int8_t _0x2C0;
        int8_t _0x2C1;
        int8_t _0x2C2;
        int8_t _0x2C3;
        int8_t _0x2C4;
        int8_t _0x2C5;
    public:
        bool pyroParamChange : 1;                              // bit offset +0
        int8_t castDexterity;                                    
    private:
        int8_t _0x2C8;
        int8_t _0x2C9;
        int8_t _0x2CA;
        int8_t _0x2CB;
        int8_t _0x2CC;
        int8_t _0x2CD;
        int8_t _0x2CE;
        int8_t _0x2CF;
    public:
        float magicMpCost;                                      
        float pyroMpCost;                                       
        float miracleMpCost;                                    
        int estusHpRate;                                      
        int estusHpPoint;                                     
        int estusMpRate;                                      
        int etsusMpPoint;                                     
        float estusMult;                                        
        float ashenMult;                                        
    private:
        int8_t _0x2F4;
        int8_t _0x2F5;
        int8_t _0x2F6;
        int8_t _0x2F7;
        int8_t _0x2F8;
        int8_t _0x2F9;
        int8_t _0x2FA;
        int8_t _0x2FB;
        int8_t _0x2FC;
        int8_t _0x2FD;
        int8_t _0x2FE;
        int8_t _0x2FF;
        int8_t _0x300;
        int8_t _0x301;
        int8_t _0x302;
        int8_t _0x303;
        int8_t _0x304;
        int8_t _0x305;
        int8_t _0x306;
        int8_t _0x307;
    public:
        int8_t vigor;                                            
        int8_t attunement;                                       
        int8_t endurance;                                        
        int8_t vitality;                                         
        int8_t strength;                                         
        int8_t dexterity;                                        
        int8_t intelligence;                                     
        int8_t faith;                                            
        int8_t luck;                                             
    };
};