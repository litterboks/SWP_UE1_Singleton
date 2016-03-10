#include <list>
#include <string>
#include "DebugEntry.h"

class MySingleton {
public:
    static MySingleton *getInstance();
    void addEntry(std::string username, std::string functionname);
    std::list<DebugEntry> getEntries();
    int exportLog(std::string filename);
protected:
    MySingleton();

private:
    static MySingleton *instance;
    std::list<DebugEntry> entries;
};