cmake_minimum_required(VERSION 3.2)
set(PROJECT Thaumatergy)

set(CMAKE_CXX_STANDARD 23)

set(CMAKE_CXX_FLAGS "-O3 -s")
set(CMAKE_CXX_FLAGS_DEBUG "-DDEBUG=2")

include_directories(src resource "DllEntry src" injector)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/injector)

set(SOURCES
        resource/Bases.h
        "DllEntry src/DllMain.cpp"
        "DllEntry src/Console.cpp"
        "DllEntry src/Console.h"
        "DllEntry src/runtime.h"
        "DllEntry src/runtime.cpp"
        src/Main.cpp
        src/address.cpp src/address.h WIP/WordChrMan.h resource/Params/Bullet.h resource/ParamPatch.cpp resource/ParamPatch.h src/gameFunc.cpp src/gameFunc.h resource/Params/ActionButtonParam.h resource/Params/AttackElementCorrectParam.h resource/Params/AtkParam_Pc.h resource/Params/AtkParam_Pc.h resource/Params/BehaviourParam_PC.h resource/Params/BonfireWarpParam.h resource/Params/CalcCorrectGraph.h resource/Params/Ceremony.h resource/Params/CharaInitParam.h resource/Params/ClearCountCorrectParam.h resource/Params/DecalParam.h resource/Params/EquipMtrlSetParam.h resource/Params/EquipParamAccessory.h resource/Params/EquipParamGoods.h resource/Params/EquipParamProtector.h resource/Params/EquipParamWeapon.h resource/Params/HitEffectSfxParam.h resource/Params/ItemLotParam.h resource/Params/LockCamParam.h resource/Params/LodParam.h resource/Params/Magic.h resource/Params/ActionButtonParam.h resource/Params/AttackElementCorrectParam.h resource/Params/AiSoundParam.h resource/Params/AtkParam_Pc.h resource/Params/AtkParam_Npc.h resource/Params/BehaviourParam_PC.h resource/Params/BonfireWarpParam.h resource/Params/CalcCorrectGraph.h resource/Params/Ceremony.h resource/Params/CharaInitParam.h resource/Params/ClearCountCorrectParam.h resource/Params/DecalParam.h resource/Params/EquipParamAccessory.h resource/Params/EquipParamGoods.h resource/Params/EquipParamProtector.h resource/Params/EquipParamWeapon.h resource/Params/HitEffectSfxParam.h resource/Params/EquipMtrlSetParam.h resource/Params/ItemLotParam.h resource/Params/LockCamParam.h resource/Params/LodParam.h resource/Params/Magic.h resource/Params/MapMimicryEstablishmentParam.h resource/Params/NpcParam.h resource/Params/ObjActParam.h resource/Params/ObjectParam.h resource/Params/PhantomParam.h resource/Params/PlayRegionParam.h resource/Params/ReinforceParamWeapon.h resource/Params/RoleParam.h resource/Params/ShopLineupParam.h resource/Params/SpEffectParam.h resource/Params/SpEffectVfxParam.h resource/Params/SwordArtsParam.h resource/Params/ThrowParam.h resource/Params/UpperArmParam.h resource/Params/WetAspectParam.h resource/BaseParamClass.h resource/Params/Bullet.cpp resource/Params/SpEffectVfxParam.cpp)

project(${PROJECT} C CXX ASM)

add_library(${PROJECT} SHARED ${SOURCES})
set_target_properties(${PROJECT} PROPERTIES PREFIX "")
target_link_options(${PROJECT} PRIVATE -static -Wno-multichar -Wl,--image-base,0x190000)