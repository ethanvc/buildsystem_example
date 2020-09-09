# 没找到根据平台来设置属性的方法
cc_binary(
    name = "libhttp.so",
    srcs = [
        "http.h",
        "http.cpp",
    ],
    defines = [
        "HTTP_DEFINE_PUBLIC_API",
    ],
    linkshared = True, # 生成动态链接库
)
