cmake_minimum_required(VERSION 3.5)
project(snake)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
	src/main.cpp 
	src/snake.cpp
	src/input.cpp 
	src/snake_map.cpp)

find_package(Threads)

add_executable(snake ${SOURCE_FILES})
target_link_libraries(snake ${CMAKE_THREAD_LIBS_INIT})
