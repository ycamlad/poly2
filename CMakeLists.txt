cmake_minimum_required(VERSION 3.17)
project(poly2)

set(CMAKE_CXX_STANDARD 14)

add_executable(poly2 main.cpp vehicule.h cmake-build-debug/vehicule.cpp velo.h velo.cpp roue.h)