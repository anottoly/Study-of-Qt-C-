cmake_minimum_required(VERSION 3.5)

project(pro LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core REQUIRED)
find_package(Qt5 REQUIRED COMPONENTS Core)
find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(pro main.cpp)
target_link_libraries(pro PRIVATE Qt5::Core)
