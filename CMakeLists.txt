cmake_minimum_required(VERSION 3.23)
project(untitled1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_LIBRARIES)

#add_executable(untitled1 main.cpp Chapter1/format.cpp Chapter2/Part01/auto.cpp Chapter2/Part02/bool.cpp Chapter2/Part02/struct.cpp Chapter2/Part02/struct2.cpp Chapter2/Part02/union01.cpp Chapter2/Part02/union02.cpp Chapter2/Part02/2-07.cpp Chapter2/Part02/2-08.cpp Chapter2/Part02/enumeration.cpp Chapter2/Part02/enumeration.h Chapter2/Part02/enum.cpp)

#add_executable(untitled1 Chapter2/Part02/enum.cpp)
#add_executable(untitled1 Chapter2/Part02/Initilize01.cpp)
#add_executable(untitled1 Chapter2/Part02/Initilize02.cpp)
#add_library(part03/util/const.h)
add_compile_definitions(item=int)
#add_library(part03 util/function.cpp)

#
# Part03
#add_executable(part03 part03/fibonacci.cpp)
#add_executable(part03 part03/literal.cpp)
#add_executable(part03 part03/main.cpp)
add_executable(part03 part03/nullptr.cpp)