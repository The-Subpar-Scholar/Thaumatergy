//generated by James's shit Python script
#pragma once
#include <cstdint>
struct EquipParamAccessory {
    static const wchar_t* name;
    struct data {                                                   
        int refId;                                            
        int sfxVariation;                                     
        float weight;                                           
        int behaviorId;                                       
        int basicPrice;                                       
        int sellValue;                                        
        int sortId;                                           
        int qwcId;                                            
        short equipModelId;                                     
        short iconId;                                           
        short shopLv;                                           
        short trophySGradeId;                                   
        short trophySeqId;                                      
        int8_t equipModelCategory;                               
        int8_t equipModelGender;                                 
        int8_t accessoryCategory;                                
        int8_t refCategory;                                      
        int8_t spEffectCategory;                                 
    private:
        int8_t _0x2F;
        int8_t _0x30;
        int8_t _0x31;
        int8_t _0x32;
        int8_t _0x33;
        int8_t _0x34;
        int8_t _0x35;
        int8_t _0x36;
        int8_t _0x37;
        int8_t _0x38;
        int8_t _0x39;
        int8_t _0x3A;
        int8_t _0x3B;
    public:
    private:
        bool memBuffer1 : 3;
public:
        bool isDiscard : 1;                                    // bit offset +3
        bool isDrop : 1;                                       // bit offset +4
    private:
        int8_t _0x3D;
        int8_t _0x3E;
        int8_t _0x3F;
        int8_t _0x40;
        int8_t _0x41;
        int8_t _0x42;
        int8_t _0x43;
        int8_t _0x44;
        int8_t _0x45;
    public:
        int8_t vowType;                                          
    private:
        int8_t _0x47;
public:
        int refId1;                                           
        int refId2;                                           
        int refId3;                                           
        int refId4;                                           
    };
};