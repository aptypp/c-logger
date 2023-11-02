cmake_minimum_required(VERSION 3.27)
project(c_logger C)

set(CMAKE_C_STANDARD 23)

add_library(c_logger STATIC library.c)
