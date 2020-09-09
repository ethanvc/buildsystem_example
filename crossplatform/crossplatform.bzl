def _cp_cc_binary(ctx):
    # 分析阶段此函数被执行
    print(ctx.attr)
    native.cc_library(name = ctx.attr.name, srcs = ctx.attr.srcs)
 
cc_binary = rule(
    implementation = _cp_cc_binary, 
    attrs = {
        "srcs": attr.label_list(allow_files = True),
    },)