# 通过命令make VERBOSE=1可以看执行的命令行参数, 验证编译选项等是否生效
# CMAKE_TOOLCHAIN_FILE 指定一个设置环境等的文件.
cmake_minimum_required(VERSION 3.16.0 FATAL_ERROR)
# 输出cmake的版本信息
message("CMAKE_VERSION=${CMAKE_VERSION}")
project(testinput LANGUAGES CXX)
# 输出信息用
# message("dir=${CMAKE_BINARY_DIR}")
# 使用C++17标准
set(CMAKE_CXX_STANDARD 17)
# 设置lib库或.a文件的输出路径
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/archive)
# 设置linux下so文件的输出路径
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
# 设置dll/exe文件的输出路径
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
### 设置编译选项
# 该项目下的每个源文件在编译时, 都会增加.作为头文件搜索路径
# 在VC编译其下, 将通过/I directory添加到编译参数中去
# 在gcc下, 将通过-I directory添加到编译参数中去
include_directories(.)
# 定义全局生效的宏, 全局生效
add_definitions(-DPROJECT_GLOBAL_MACRO)
# 指定全局编译参数, MSVC时一个cmake检测并设置的全局变量
if (MSVC)
    add_compile_options(/W3 /WX)
else()
    add_compile_options(-W -Wall -Werror)
endif()

# VC编译器下, 指定链接运行时库的方式
message("CMAKE_BUILD_TYPE=${CMAKE_BUILD_TYPE}")
if(MSVC)
    string(REPLACE /MDd /MTd CMAKE_CXX_FLAGS_DEBUG ${CMAKE_CXX_FLAGS_DEBUG})
    # message("CMAKE_CXX_FLAGS_DEBUG=${CMAKE_CXX_FLAGS_DEBUG}")
    string(REPLACE /MD /MT CMAKE_CXX_FLAGS_RELEASE ${CMAKE_CXX_FLAGS_RELEASE})
    message("CMAKE_CXX_FLAGS_RELEASE=${CMAKE_CXX_FLAGS_RELEASE}")
endif()

# 输出编译命令行参数, 用于观察实现细节, 比如默认有些什么参数开启了
# cmake构建后, 结果输出在文件compile_commands.json中
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(http)
add_subdirectory(inputcore)
add_subdirectory(cloudservice)
add_subdirectory(ipc)
add_subdirectory(external_proj)