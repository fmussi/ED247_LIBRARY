# project specific information
cmake_minimum_required(VERSION 3.14)
project(myLib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY bin)
set(CMAKE_BUILD_TYPE Debug)
add_library(myLib SHARED myLib.cpp
  myLib.h)

install(FILES ./build/bin/libmyLib.so  DESTINATION /usr/lib)