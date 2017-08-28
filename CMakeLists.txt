cmake_minimum_required(VERSION 3.6)
project(myApplication1)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c)
add_executable(myApplication1 ${SOURCE_FILES})