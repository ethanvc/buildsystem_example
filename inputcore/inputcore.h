#pragma once
// 使用_MSC_VER宏判断是否为VC++编译器, 通用性非常好
#ifdef _MSC_VER
#ifdef INPUTCORE_DEFINE_PUBLIC_API
#define INPUTCORE_PUBLIC_API __declspec(dllexport)
#else
#define INPUTCORE_PUBLIC_API __declspec(dllimport)
#endif
#else // _MSC_VER
#define HTTP_PUBLIC_API
#endif // _MSC_VER

void INPUTCORE_PUBLIC_API BeginInput(const char* input, char* output, size_t* output_size);
