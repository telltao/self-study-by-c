cmake_minimum_required(VERSION 3.17)
project(Chapter4 C)

set(CMAKE_C_STANDARD 11)

# 遍历全部C文件
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()