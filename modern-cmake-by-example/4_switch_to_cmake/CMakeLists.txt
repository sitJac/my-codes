# 指定CMake的最小版本要求
cmake_minimum_required(VERSION 3.9)

# 设置项目名称
project(answer)

#[[
添加可执行文件target，类似于原来makefile的：

	answer: answer.o main.o
	answer.o: answer.cpp answer.hpp
	main.o: main.cpp answer.hpp

CMake 会自动找到依赖的头文件，不需要特别指定。
#]]
add_executable(answer main.cpp answer.cpp)
#[[
使用如下命令构建本项目：

    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/answer      # 运行 answer 程序
#]]
