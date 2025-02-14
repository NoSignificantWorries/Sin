cmake_minimum_required(VERSION 3.15)
project(Sin)

option(USE_DOUBLE "Enable double precision" OFF)
message("USE_DOUBLE: ${USE_DOUBLE}")

if(USE_DOUBLE)
    add_definitions(-DUSE_DOUBLE)
endif()

add_executable(main main.cpp)

