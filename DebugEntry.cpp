//
// Created by motch on 09.03.2016.
//

#include "DebugEntry.h"
#include <time.h>

DebugEntry::DebugEntry(std::string user, std::string functionname) : user(user), functionname(functionname), datetime(time(NULL)){}
