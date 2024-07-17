cmake_minimum_required(VERSION 3.28)
project(cppCLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppCLion main.cpp
        basicGrammar/myfirst.cpp
        basicGrammar/carrots.cpp
        basicGrammar/sqrt.cpp
        basicGrammar/ourfunction1.cpp)

add_executable(myfirst basicGrammar/myfirst.cpp)
add_executable(carrots basicGrammar/carrots.cpp)
add_executable(sqrt basicGrammar/sqrt.cpp)
add_executable(ourfunction1 basicGrammar/ourfunction1.cpp)