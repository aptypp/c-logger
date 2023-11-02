cmake_minimum_required(VERSION 3.27)
project(logger C)

set(CMAKE_C_STANDARD 23)

add_library(logger STATIC src/logger.c)

target_include_directories(logger PUBLIC ${CMAKE_SOURCE_DIR}/include)

add_executable(app src/example.c)

target_include_directories(app PUBLIC ${CMAKE_SOURCE_DIR}/include)

target_link_libraries(app PRIVATE logger)