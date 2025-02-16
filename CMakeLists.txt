cmake_minimum_required(VERSION 3.30)

get_filename_component(ProjectId ${CMAKE_CURRENT_SOURCE_DIR} NAME)
string(REPLACE " " "_" ProjectId ${ProjectId})
project(${ProjectId} C)

set(CMAKE_C_STANDARD 11)

# 递归查找当前目录及其子目录中的所有 .c 文件
file(GLOB_RECURSE files "${CMAKE_CURRENT_SOURCE_DIR}/*.c")
list(FILTER files EXCLUDE REGEX ".*/(build|CMakeFiles)/.*")
foreach (file ${files})
    get_filename_component(name ${file} NAME)
    add_executable(${name} ${file})
endforeach()