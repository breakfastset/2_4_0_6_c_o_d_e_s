cmake_minimum_required(VERSION 4.1)
project(Lecture_07_CP2406_more)

set(CMAKE_CXX_STANDARD 20)

add_executable(Lecture_07_CP2406_more main.cpp
        Employee.h
        Employee.cpp
        ContractEmployee.h
        ContractEmployee.cpp
        PartTimeEmployee.h
        PartTimeEmployee.cpp)
