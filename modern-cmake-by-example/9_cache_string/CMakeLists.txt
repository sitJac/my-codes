cmake_minimum_required(VERSION 3.9)
project(answer)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(answer)

add_subdirectory(curl_wrapper)

add_subdirectory(wolfram)

add_executable(answer_app main.cpp)

target_link_libraries(answer_app libanswer)
