cmake_minimum_required(VERSION 3.17)
project(chapter6 C)

set(CMAKE_C_STANDARD 11)
# 在此引入 include 包下的文件,则可以直接在 代码中 头文件使用 #include <factorial.h>
include_directories("include")

set(CMAKE_C_STANDARD 11)

# 遍历全部C文件
file(GLOB files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
foreach(file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()