cmake_minimum_required(VERSION 3.1)
project(soldier)

set(CMAKE_CXX_STANDARD 14)
include_directories(${PROJECT_SOURCE_DIR}/include)#包含头文件
#add_executable(soldier main.cpp  src/Gun.cpp src/Soldier.cpp)

add_executable(soldier main.cpp )#可执行文件

#add_subdirectory(src)#need contain a CMakeLists.txt file.

target_link_libraries(soldier soldier_shared)#可执行文件与共享库链接
  
add_subdirectory(src )#need contain a CMakeLists.txt file.构建子目录 且需要cmaklists.txt文件


set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)
