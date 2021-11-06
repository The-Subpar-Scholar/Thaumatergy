#include <windows.h>
#include "runtime.h"

BOOL APIENTRY DllMain(HINSTANCE hinstDll, DWORD fdwReason, LPVOID lpReserved) {
    switch(fdwReason) {
        case DLL_PROCESS_ATTACH:
            CreateThread(nullptr, 0, reinterpret_cast<LPTHREAD_START_ROUTINE>(runtime::threadStartRoutine), nullptr, 0,nullptr);
            break;
        case DLL_PROCESS_DETACH:
            runtime::requestThreadTermination();
            while(!runtime::isThreadTerminated());
            break;

    }
    return TRUE;
}