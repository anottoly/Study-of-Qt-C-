cmake_minimum_required(VERSION 3.5)

project(progforMatrixClass LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(PROJECT_NAME progforMatrixClass)
find_package(Qt5 REQUIRED COMPONENTS Core)


add_executable(${PROJECT_NAME} main.cpp matrix.cpp matrix.h)
target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core)
