# CMakeList.txt : CMake project for cpp-ess1-mod2, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cpp-ess1-mod2")

# Add source to this project's executable.
add_executable (cpp-ess1-mod2 "cpp-ess1-mod2.cpp" "cpp-ess1-mod2.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp-ess1-mod2 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
