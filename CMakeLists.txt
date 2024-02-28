# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.20)
project(main VERSION 0.1.0)
add_executable(main main.cpp)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDART 11)

