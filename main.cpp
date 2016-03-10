#include <iostream>
#include "FunctionLogSingleton.h"
using namespace std;

void foo(std::string user) {
    MySingleton::getInstance()->addEntry(user, __func__);
}

void bar(std::string user) {
    MySingleton::getInstance()->addEntry(user, __func__);
}

void blub(std::string user) {
    MySingleton::getInstance()->addEntry(user, __func__);
}

int main() {
    std::string user = "Martin";
    foo(user);
    bar(user);
    blub(user);
    bar(user);
    foo(user);
    bar(user);
    MySingleton::getInstance()->exportLog("logfile.txt");

    return 0;
}