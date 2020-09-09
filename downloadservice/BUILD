cc_binary(
    name = "downloadservice",
    srcs = [
        "main.cpp",
    ],
    deps = [
        # 指定依赖项, 这里完整的路径是//base/crypto:crypt, 但是bazel支持默认默认target和package名相同时省略target名
        "//base/crypto",
    ],
)