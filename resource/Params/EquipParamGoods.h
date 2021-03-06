//generated by James's shit Python script
#pragma once
#include <cstdint>
struct EquipParamGoods {
    static const wchar_t* name;
    struct data {                                                   
        int refId;                                            
        int sfxVariationId;                                   
        float weight;                                           
        int basicPrice;                                       
        int sellValue;                                        
        int behaviorId;                                       
        int replaceItemId;                                    
        int sortId;                                           
        int qwcId;                                            
        int yesNoDialogMessageId;                             
        int magicId;                                          
        short iconId;                                           
        short modelId;                                          
        short shopLv;                                           
        short compTrophySedId;                                  
        short trophySeqId;                                      
        short maxNum;                                           
        int8_t consumeHeroPoint;                                 
        int8_t overDexterity;                                    
        int8_t goodsType;                                        
        int8_t refCategory;                                      
        int8_t spEffectCategory;                                 
    private:
        int8_t _0x3D;
public:
        int8_t goodsUseAnim;                                     
        int8_t opmeMenuType;                                     
        int8_t useLimitCategory;                                 
        int8_t replaceCategory;                                  
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
        bool enable_live : 1;                                  // bit offset +0
        bool enable_gray : 1;                                  // bit offset +1
        bool enable_white : 1;                                 // bit offset +2
        bool enable_black : 1;                                 // bit offset +3
        bool enable_multi : 1;                                 // bit offset +4
        bool disable_offline : 1;                              // bit offset +5
        bool isEquip : 1;                                      // bit offset +6
        bool isConsume : 1;                                    // bit offset +7
        bool :0;
        bool isAutoEquip : 1;                                  // bit offset +0
        bool isEstablishment : 1;                              // bit offset +1
        bool isOnlyOne : 1;                                    // bit offset +2
        bool isDiscard : 1;                                    // bit offset +3
        bool isDeposit : 1;                                    // bit offset +4
        bool isDisableHand : 1;                                // bit offset +5
        bool IsTravelItem : 1;                                 // bit offset +6
        bool isSuppleItem : 1;                                 // bit offset +7
        bool :0;
        bool isFullSuppleItem : 1;                             // bit offset +0
        bool isEnhance : 1;                                    // bit offset +1
        bool isFixItem : 1;                                    // bit offset +2
        bool disableMultiDropShare : 1;                        // bit offset +3
        bool disableUseAtColiseum : 1;                         // bit offset +4
        bool disableUseAtOutOfColiseum : 1;                    // bit offset +5
        bool useBulletMaxNum : 1;                              // bit offset +6
        bool useHpCureMaxNum : 1;                              // bit offset +7
        int8_t isAutoReplenish;                                  
        int refId2;                                           
        int reinforceTypeId;                                  
        int vagrantItemLotId;                                 
        int vagrantBonusEneDropItemLotId;                     
        int vagrantItemEneDropItemLotId;                      
        int sfxId;                                            
        int sfxId1;                                           
        int sfxId2;                                           
        bool isLoadOfCinder : 1;                               // bit offset +0
        bool isPlayRegion1 : 1;                                // bit offset +1
        bool isLadder : 1;                                     // bit offset +2
        bool isMultiPlay : 1;                                  // bit offset +3
        bool useSelected : 1;                                  // bit offset +4
        bool isEnhanceLeft : 1;                                // bit offset +5
        bool isPlayRegion2 : 1;                                // bit offset +6
        bool isNetPenalized : 1;                               // bit offset +7
        int8_t SuppleItemType;                                   
        int8_t menuAdhocType;                                    
        int8_t isDrop;                                           
        short storageMax;                                       
        int8_t invadeType;                                       
    private:
        int8_t _0x6F;
public:
        int shopId;                                           
        short mpCost;                                           
        int8_t useLimitCategory2;                                
    };
};