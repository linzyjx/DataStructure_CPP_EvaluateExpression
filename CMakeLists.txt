cmake_minimum_required(VERSION 3.10)
project(compute)

set(CMAKE_CXX_STANDARD 11)

add_library(stack stack.cpp stack.h)

add_executable(compute main.cpp compute.cpp compute.h)
