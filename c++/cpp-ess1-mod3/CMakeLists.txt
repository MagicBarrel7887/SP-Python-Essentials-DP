# CMakeList.txt : CMake project for cpp-ess1-mod3, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("cpp-ess1-mod3")

# Add source to this project's executable.
add_executable (cpp-ess1-mod3 "cpp-ess1-mod3.cpp" "cpp-ess1-mod3.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cpp-ess1-mod3 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
