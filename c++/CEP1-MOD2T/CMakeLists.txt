# CMakeList.txt : CMake project for CEP1-MOD2T, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("CEP1-MOD2T")

# Add source to this project's executable.
add_executable (CEP1-MOD2T "CEP1-MOD2T.cpp" "CEP1-MOD2T.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CEP1-MOD2T PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
