cmake_minimum_required(VERSION 3.21)
project(TP1)

set(CMAKE_CXX_STANDARD 14)

add_executable(TP1 main.cpp figure.cpp figure.h polygone/polygone.cpp polygone/polygone.h polygone/rectangle.cpp polygone/rectangle.h polygone/carre.cpp polygone/carre.h polygone/TriangleEquilateral.cpp polygone/TriangleEquilateral.h cercle.cpp cercle.h)
