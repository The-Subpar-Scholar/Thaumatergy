#include <runtime.h>

//declaration of fields
bool runtime::_requestThreadTermination = false;
bool runtime::_threadHasTerminated = false;

//perform any necessary setup before starting calling the main thread
void runtime::threadStartRoutine(){
    Console::CreateConsole();
    std::cout<<"Console Allocated\n";
    try {
        main();
    }
    catch (const std::exception& e) {
        handleCrash(e);
        return;
    }
    restore();
    confirmThreadTermination();
}


//the below methods exist to get around the issue of fields being in several locations
void runtime::requestThreadTermination() {
    _requestThreadTermination = true;
}
void runtime::confirmThreadTermination() {
    _threadHasTerminated = true;
}
bool runtime::isThreadTerminationRequested() {
    return _requestThreadTermination;
}
bool runtime::isThreadTerminated() {
    return _threadHasTerminated;
}

//perform any necessary cleanup
bool runtime::restore() {
    Console::CloseConsole();
    return true;
}

//handle the screw-up
bool runtime::handleCrash(std::exception e) {
    std::cerr<<e.what()<<std::endl;
    Console::CloseConsole();
    return true;
}