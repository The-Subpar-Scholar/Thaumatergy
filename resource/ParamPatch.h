//
// Created by ojgpr on 2021-11-02.
//

#pragma once
#include <map>
#include "BaseParamClass.h"
namespace ParamPatch {
    extern std::map<std::wstring , uintptr_t> paramTable;
    std::map<int, uintptr_t> getIdTable(uintptr_t param);
    void paramIndexer();
    void enumerate();
    template<typename T>
    T* newPatch(std::wstring param, int id) {
        return reinterpret_cast<T*>(getIdTable(paramTable[param])[id]);
    }
};
using ParamPatch::newPatch;