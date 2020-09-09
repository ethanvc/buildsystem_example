load('@bazel_tools//tools/build_defs/repo:git.bzl', 'git_repository')
# 命令行可以携带全局配置, -s表示输出执行的命令行, --cxxopt是传递给c++编译器的命令行参数
# bazel build -s :downloadservice --cxxopt='-std=c++14'
# 通过指定命令行参数--sandbox_debug, 可以打印出出错的命令的命令行参数, 默认会省略一些参数, 体验很不好.

# #include <...>和#include "..." 的实现方式是编译器相关的, 因此, 建议系统头文件和
# 标准库使用<>版本, 其它一律使用""版本
# bazel会默认将WORKSPACE目录加入头文件搜索路径, 加入的方式是将当前目录加入头文件搜索路径, 
# 当前目录始终是WORKSPACE目录

# 本地编译并运行目标, 支持cc_binaryhe cc_test生成的目标
# bazel run :targetname

# 定位问题时, 可以通过print函数打印debug级别的日志. fail函数会同样输出日志信息, 但会终止构建
# type函数可以输出变量的类型

git_repository(
    name = "boringssl",
    commit = "936ca21922d266a31e3309144b082bdb3a689af7",
    remote = "https://boringssl.googlesource.com/boringssl",
)

git_repository(
    name = "gtest",
    remote = "https://github.com/google/googletest",
    branch = "v1.10.x",
)