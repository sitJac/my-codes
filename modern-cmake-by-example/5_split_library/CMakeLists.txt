cmake_minimum_required(VERSION 3.9)
project(answer)

# 添加libanswer库目标，STATIC指定静态库
add_library(libanswer STATIC answer.cpp)

add_executable(answer main.cpp)

# 为answer可执行目标链接libanswer
target_link_libraries(answer libanswer)

# 实现了libanswer的复用


