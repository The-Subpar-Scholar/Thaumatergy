//
// Created by ojgpr on 2021-10-17.
//
#include "runtime.h"
#include "address.h"
#include "Bases.h"
#include "BaseParamClass.h"

int main() {
    while(!runtime::isThreadTerminationRequested()) {
        Sleep(50);
    }
}