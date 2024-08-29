cmake_minimum_required(VERSION 3.28)
project(cppCLion)

set(CMAKE_CXX_STANDARD 11)

add_executable(cppCLion main.cpp
        basicGrammar/myfirst.cpp
        basicGrammar/carrots.cpp
        basicGrammar/sqrt.cpp
        basicGrammar/ourfunction1.cpp
        basicGrammar/limits.cpp
        basicGrammar/hexoct.cpp
        basicGrammar/fltadd.cpp
        basicGrammar/assign.cpp
        basicGrammar/typecast.cpp
        basicGrammar/arrayone.cpp
        basicGrammar/strings.cpp
        basicGrammar/instr2.cpp
        basicGrammar/instr3.cpp
        basicGrammar/numstr.cpp
        basicGrammar/strtype2.cpp
        basicGrammar/strtype3.cpp
        basicGrammar/structur.cpp
        basicGrammar/arrstruc.cpp
        basicGrammar/address.cpp
        basicGrammar/pointer.cpp
)

add_executable(myfirst basicGrammar/myfirst.cpp)
add_executable(carrots basicGrammar/carrots.cpp)
add_executable(sqrt basicGrammar/sqrt.cpp)
add_executable(ourfunction1 basicGrammar/ourfunction1.cpp)
add_executable(limits basicGrammar/limits.cpp)
add_executable(hexoct basicGrammar/hexoct.cpp)
add_executable(fltadd basicGrammar/fltadd.cpp)
add_executable(typecast basicGrammar/typecast.cpp)
add_executable(arrayone basicGrammar/arrayone.cpp)
add_executable(strings basicGrammar/strings.cpp)
add_executable(instr2 basicGrammar/instr2.cpp)
add_executable(instr3 basicGrammar/instr3.cpp)
add_executable(numstr basicGrammar/numstr.cpp)
add_executable(strtype2 basicGrammar/strtype2.cpp)
add_executable(strtype3 basicGrammar/strtype3.cpp)
add_executable(structur basicGrammar/structur.cpp)
add_executable(arrstruc basicGrammar/arrstruc.cpp)
add_executable(address basicGrammar/address.cpp)
add_executable(pointer basicGrammar/pointer.cpp)