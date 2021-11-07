//
// Created by ojgpr on 2021-11-02.
//

#include "ParamPatch.h"
#include <iostream>
#include <cstring>
#include <string>

std::map<std::wstring , uintptr_t> ParamPatch::paramTable;

void ParamPatch::paramIndexer() {
    uintptr_t param = *reinterpret_cast<uintptr_t*>(0x144785FE0) + 0x10;
    uintptr_t start = *reinterpret_cast<uintptr_t*>(param);
    uintptr_t end = *reinterpret_cast<uintptr_t*>(param + 8);
    for (int i = 0; i < end-start; i+= 8) {
        uintptr_t paramAddress = *reinterpret_cast<uintptr_t*>(start + i);
        std::wstring paramString;
        if (*reinterpret_cast<int*>(paramAddress+0x20)>7) {
            paramString = reinterpret_cast<wchar_t*>(*reinterpret_cast<uintptr_t*>(paramAddress + 0x10));
        } else {
            paramString = reinterpret_cast<wchar_t*>(paramAddress + 0x10);
        }
        if (!paramString.empty()) paramTable[paramString] = paramAddress;
    }
}

void ParamPatch::enumerate() {
    for(const auto& pair : paramTable) {
        wprintf(L"%ls : 0x%p\n", pair.first.c_str(), pair.second);
    }
}

std::map<int, uintptr_t> ParamPatch::getIdTable(uintptr_t param) {
    std::map<int, uintptr_t> idTable;
    uintptr_t address = *reinterpret_cast<uintptr_t*>(*reinterpret_cast<uintptr_t*>(param + 0x68)+0x68);
    for(int i = 0; i < *reinterpret_cast<double*>(address + 0xA); ++i) {
        idTable[*reinterpret_cast<int*>(address + 0x40 + 0x18 * i)] = *reinterpret_cast<int*>(address + 0x40 + 0x18 * i) + address;
    }
    return idTable;
}