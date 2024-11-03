cmake_minimum_required(VERSION 3.20)
project(cmake-tutorial)

add_subdirectory(subproject1)
add_subdirectory(subproject2)

include_directories(subproject2/include)
include_directories(subproject2/subproject3/include)

include_directories(include)
add_executable(${PROJECT_NAME} main.cpp src/Project.cpp)

target_link_libraries(${PROJECT_NAME} mathLib)
target_link_libraries(${PROJECT_NAME} consoleLib)
