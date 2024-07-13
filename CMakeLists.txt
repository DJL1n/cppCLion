cmake_minimum_required(VERSION 3.28)
project(cppCLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppCLion main.cpp
        basicGrammar/myfirst.cpp)

add_executable(myfirst basicGrammar/myfirst.cpp)