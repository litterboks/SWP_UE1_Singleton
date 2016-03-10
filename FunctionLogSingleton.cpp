#include "FunctionLogSingleton.h"
#include <iostream>
#include <fstream>
#include <ctime>
MySingleton::MySingleton() { };

MySingleton *MySingleton::instance = 0;

MySingleton *MySingleton::getInstance() {
    if (instance == 0) {
        instance = new MySingleton;
    }
    return instance;
}

void MySingleton::addEntry(std::string username, std::string functionname) {
    DebugEntry entry = DebugEntry(username, functionname);
    entries.push_back(entry);
};

std::list<DebugEntry> MySingleton::getEntries() {
    return entries;
}

int MySingleton::exportLog(std::string filename) {
    std::ofstream logfile;
    logfile.open (filename);
    int i = 1;
    for (DebugEntry entry : MySingleton::getInstance()->getEntries()) {
        char buff[18];
        logfile << i << "." << std::endl << "Username: " << entry.user << std::endl << "Function: " <<
        entry.functionname << std::endl << "Timestamp: " << ctime(&entry.datetime) << std::endl << std::endl;
        i++;
    }
    logfile.close();
    return 0;
}