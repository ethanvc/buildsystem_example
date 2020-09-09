cc_library(
    name = "crypto",
    srcs = [
        "md5.h",
        "md5.cpp",
    ],
    deps = [
        # 引用externl project的方式, 其中boringssl是git_repository的name属性.
        "@boringssl//:crypto",
        "@boringssl//:ssl",
    ],
    visibility = [
        # 该目标全局可见
        "//visibility:public",
    ],
)

cc_test(
    name = "crypto_test",
    srcs = [
        "crypto_test.cpp",
    ],
    deps = [
        "@gtest//:gtest",
        "@gtest//:gtest_main",
        ":crypto",
    ]
)