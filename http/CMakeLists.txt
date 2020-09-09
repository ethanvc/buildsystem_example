add_library(http SHARED http.h http.cpp)
# 定义一个宏, 这个宏仅对这个目标生效
if(MSVC)
    target_compile_definitions(http PRIVATE HTTP_DEFINE_PUBLIC_API)
endif (MSVC)
# 如果你想依赖你的模块不用写http/http.h, 而直接包含http.h, 这需要下面这句
target_include_directories(http PUBLIC .)