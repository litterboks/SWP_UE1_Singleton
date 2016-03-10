cmake_minimum_required(VERSION 3.3)
project(SWP_UE1_Singleton)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES main.cpp FunctionLogSingleton.cpp DebugEntry.cpp DebugEntry.h)
add_executable(SWP_UE1_Singleton ${SOURCE_FILES})
