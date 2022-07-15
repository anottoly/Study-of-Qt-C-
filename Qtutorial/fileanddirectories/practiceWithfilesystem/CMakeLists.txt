cmake_minimum_required(VERSION 3.5)

project(practiceWithfilesystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(practiceWithfilesystem main.cpp fileworker.cpp fileworker.h check_memorySizeByte.cpp)

target_link_libraries(practiceWithfilesystem PRIVATE Qt5::Core)
