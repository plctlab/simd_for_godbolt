cmake_minimum_required(VERSION 3.10)

project(my_project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O2 -std=c++17")

add_executable(simd_demo ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cc)

target_include_directories(simd_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
