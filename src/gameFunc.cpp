//
// Created by ojgpr on 2021-11-04.
//

#include <cstring>
#include "gameFunc.h"

void gameFunc::animFunc(int animationId) {
    int(*AnimationFunction)(...);
    *(uintptr_t*)&AnimationFunction = 0x140D84870;
    char animationData[0x100] = { 0 };
    memcpy((animationData + 0x28), &animationId, 4);
    uint64_t chrAnimAddress = *buildPointer<uint64_t>(BaseB, 0x80, 0x1F90, 0x58, 0x8, 0x1F90, 0x28, 0x10, 0x28, 0xB8);
    AnimationFunction(chrAnimAddress, (animationData + 0x28));
}
