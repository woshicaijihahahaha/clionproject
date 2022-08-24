cmake_minimum_required(VERSION 3.22)
project(thread)

set(CMAKE_CXX_STANDARD 14)
find_package(Threads REQUIRED)
add_executable(thread main.cpp )
target_link_libraries(thread Threads::Threads)