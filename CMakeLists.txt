cmake_minimum_required(VERSION 3.8)
project(projekter)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp Books.h)

add_executable(projekter ${SOURCE_FILES})