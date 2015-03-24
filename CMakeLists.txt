cmake_minimum_required(VERSION 3.1)
project(CPPLearning)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(CPPLearning ${SOURCE_FILES} main.h util/util.h util/util.cpp math/math.h math/math.cpp)