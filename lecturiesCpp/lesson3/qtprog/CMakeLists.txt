
cmake_minimum_required(VERSION 3.5)

project(qtprog LANGUAGES CXX)

set(PROJECT_NAME pro)
set (SOURCES main.cpp check_intvalue_prime.cpp lesson3namespace.h)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 REQUIRED COMPONENTS Core)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core)
