cmake_minimum_required(VERSION 3.22)
project(eigen_test)

set(CMAKE_CXX_STANDARD 14)
include_directories("/usr/include/eigen3")
add_executable(eigen_test main.cpp)
