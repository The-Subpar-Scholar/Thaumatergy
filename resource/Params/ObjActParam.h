//generated by James's shit Python script
#pragma once
#include <cstdint>
struct ObjActParam {
    static const wchar_t* name;
    struct data {                                                   
        int actionEnableMsgId;                                
        int actionFailedMsgId;                                
        int spQualifiedPassEventFlag;                         
        int playerAnimId;                                     
        int chrAnimId;                                        
        short validDist;                                        
        short spQualifiedId;                                    
        short spQualifiedId2;                                   
        int8_t ObjDummyId;                                       
    private:
        int8_t _0x1B;
public:
        int ObjAnimId;                                        
        int8_t ValidPlayerAngle;                                 
        int8_t spQualifiedType;                                  
        int8_t spQualifiedType2;                                 
        int8_t ValidObjAngle;                                    
        int8_t ChrSorbType;                                      
        int8_t eventKickTiming;                                  
    private:
        short _0x27;
public:
        int actionButtonParamId;                              
        int actionSuccessMsgId;                               
    };
};