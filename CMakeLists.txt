cmake_minimum_required(VERSION 3.15)
project(FiniteDifference)

set(CMAKE_CXX_STANDARD 17)

add_executable(FiniteDifference main.cpp grid.cpp grid.h parser.cpp parser.h FDESolver.cpp FDESolver.h)