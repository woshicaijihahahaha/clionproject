cmake_minimum_required(VERSION 3.22)
project(sophus_example)

set(CMAKE_CXX_STANDARD 14)
# 为使用 sophus，需要使用find_package命令找到它
find_package(Sophus REQUIRED)
include_directories(${Sophus_INCLUDE_DIRS})
# Eigen
include_directories("/usr/include/eigen3")
add_executable(sophus_example main.cpp)
target_link_libraries(sophus_example Sophus::Sophus)


