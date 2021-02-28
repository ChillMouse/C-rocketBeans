# cmake_minimum_required(VERSION <specify CMake version here>)
project(C-rocketBeans C)

set(CMAKE_CXX_STANDARD 17)
set(SOURCE_FILES event1.c)

add_executable(C-rocketBeans event1.c)