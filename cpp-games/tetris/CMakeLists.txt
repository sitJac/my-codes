cmake_minimum_required(VERSION 3.10)
project(tetris)

set(CMAKE_CXX_STANDARD 11)

find_package(Curses REQUIRED)

add_executable(tetris tetris.cpp)

target_link_libraries(tetris ${CURSES_LIBRARIES})

