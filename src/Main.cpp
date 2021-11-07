//
// Created by ojgpr on 2021-10-17.
//
#include "runtime.h"
#include "address.h"
#include "Bases.h"

int main() {
    auto chaosBedVestiges = param<Bullet>(12456000);
    std::cout<<chaosBedVestiges->life<<'\n';
    std::cout<<chaosBedVestiges->numShoot<<'\n';
/*    while(!runtime::isThreadTerminationRequested()) {
        Sleep(50);
    }*/
}