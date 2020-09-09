add_executable(cloudservice cloudservice.cpp cloudservice.h)
# add dependency
target_link_libraries(cloudservice PRIVATE http)
target_link_libraries(cloudservice PRIVATE inputcore)
target_link_libraries(cloudservice PRIVATE ipc)
# 由于inputconfig只有头文件, 因此需要使用INTERFACE告诉构建系统不要将lib库加如链接
target_link_libraries(cloudservice INTERFACE inputconfig)
target_link_libraries(cloudservice PRIVATE externalfunc)
# 通过file命令指定多个文件, 如果文件很多, 就不用一个个加了.
# file(GLOB_RECURSE cloudservice_source_file_list RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.cpp" "*.c" "*.cc")
# message("cloudservice_source_file_list=${cloudservice_source_file_list}")