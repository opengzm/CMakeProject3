# CMakeList.txt: 顶层 CMake 项目文件，在此处执行全局配置
# 并包含子项目。
#
cmake_minimum_required (VERSION 3.8)

project ("CMakeProject3")

# 设置c++语言标准，我使用c++11
set(CMAKE_CXX_STANDARD 11)
# 包含子项目。
add_subdirectory ("CMakeProject3")
