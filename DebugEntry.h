//
// Created by motch on 09.03.2016.
//

#ifndef SWP_UE1_SINGLETON_MAPENTRY_H

#include <string>

#define SWP_UE1_SINGLETON_MAPENTRY_H


class DebugEntry {
public:
    DebugEntry(std::string user, std::string functionname);

    std::string user;
    std::string functionname;
    time_t datetime;
};


#endif //SWP_UE1_SINGLETON_MAPENTRY_H
