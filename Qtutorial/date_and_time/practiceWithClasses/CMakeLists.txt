cmake_minimum_required(VERSION 3.5)

project(practiceWithClasses LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(PROJECT_NAME practiceWithClasses)

find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(practiceWithClasses main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE Qt5::Core)

