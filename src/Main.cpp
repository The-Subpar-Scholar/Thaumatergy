//
// Created by ojgpr on 2021-10-17.
//
#include "runtime.h"
#include "address.h"
#include "Bases.h"

int main() {
    auto ChaosBedVestiges = newPatch<Bullet>(L"Bullet", 12456000);
    ChaosBedVestiges->life = 4;
    ChaosBedVestiges->numShoot = 15;
    while(!runtime::isThreadTerminationRequested()) {
        Sleep(50);
    }
}