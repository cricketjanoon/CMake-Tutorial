cmake_minimum_required(VERSION 3.31)
project(cmake-tutorial)

include_directories("${CMAKE_SOURCE_DIR}/include")
add_executable(hello_world main.cpp src/TestClass.cpp)