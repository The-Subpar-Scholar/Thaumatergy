//
// Created by ojgpr on 2021-11-02.
//

#pragma once
#include <map>
#include "BaseParamClass.h"
#include <iostream>
namespace ParamPatch {
    extern std::map<std::wstring , uintptr_t> paramTable;
    std::map<int, uintptr_t> getIdTable(uintptr_t paramAddress);
    uintptr_t getAddressFromId(uintptr_t paramAddress, int id);
    void paramIndexer();
    void enumerate();

    template<typename T>
    typename T::data* param(int id) {
        return reinterpret_cast<typename T::data*>(getAddressFromId(paramTable[T::name], id));
    }
};
using ParamPatch::param;