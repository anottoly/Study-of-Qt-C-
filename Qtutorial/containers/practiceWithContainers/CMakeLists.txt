cmake_minimum_required(VERSION 3.5)

project(practiceWithContainers LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
find_package(Qt5 REQUIRED COMPONENTS Core)

add_executable(practiceWithContainers main.cpp)
target_link_libraries(practiceWithContainers PRIVATE Qt5::Core)
