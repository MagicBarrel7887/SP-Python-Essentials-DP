﻿# CMakeList.txt : CMake project for Ray Tracing in One Weekend, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("Ray Tracing in One Weekend")

# Add source to this project's executable.
add_executable (CMakeTarget "Ray Tracing in One Weekend.cpp" "Ray Tracing in One Weekend.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeTarget PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
