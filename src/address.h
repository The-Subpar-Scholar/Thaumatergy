//
// Created by ojgpr on 2021-11-02.
//

#pragma once
#include <cstdint>


template<typename T>
T* buildPointer(uintptr_t base) {
    return reinterpret_cast<T*>(base);
}
template<typename T, typename Arg>
T* buildPointer(uintptr_t base, Arg offset) {
    base = *reinterpret_cast<uintptr_t*>(base) + offset;
    return buildPointer<T>(base);
}
template<typename T, typename Arg, typename...Args>
T* buildPointer(uintptr_t base, Arg offset, Args...offsets) {
    base = *reinterpret_cast<uintptr_t*>(base) + offset;
    return buildPointer<T>(base, offsets...);
}