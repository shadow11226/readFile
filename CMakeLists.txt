# version 3.11 or later of CMake or needed later for installing GoogleTest
# so let's require it now.
cmake_minimum_required(VERSION 3.20)
project(main VERSION 0.1.0)
add_executable(main ./main.cpp)

# Tell compiler to use C++20 features. The code doesn't actually use any of them.
#target_compile_features(cxx_std_20)