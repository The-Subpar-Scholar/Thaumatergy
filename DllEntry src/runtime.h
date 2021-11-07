//
// Created by ojgpr on 2021-10-30.
//
#pragma once
#include "Console.h"
#include "ParamPatch.h"

class runtime {
    static bool _requestThreadTermination;
    static bool _threadHasTerminated;
    static bool restore();
    static bool handleCrash(std::exception e);
public:
    static void threadStartRoutine();
    static void requestThreadTermination();
    static void confirmThreadTermination();
    static bool isThreadTerminationRequested();
    static bool isThreadTerminated();
};

int main();