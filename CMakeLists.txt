cmake_minimum_required(VERSION 3.13.4)
#配置项目名称
set(CMAKE_PROJECT_NAME CABO)
#构建项目
project(${CMAKE_PROJECT_NAME} VERSION 0.0 LANGUAGES C CXX)
#设置版本
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD 11)

include_directories(include include/object include/function)
#添加目标
add_executable(${CMAKE_PROJECT_NAME})
#CONFIGURE_DEPENDS自动更新变量
file(GLOB SRC CONFIGURE_DEPENDS src/*.cpp src/object/*.cpp src/function/*.cpp)
#添加源文件到目标
target_sources(${CMAKE_PROJECT_NAME} PUBLIC ${SRC})
