#pragma once
#include <iostream>
#include <string>
// 使用_MSC_VER宏判断是否为VC++编译器, 通用性非常好
#ifdef _MSC_VER
#ifdef DEFINE_HTTP_PUBLIC_API
#define HTTP_PUBLIC_API __declspec(dllexport)
#else
#define HTTP_PUBLIC_API __declspec(dllimport)
#endif
#else // _MSC_VER
#define HTTP_PUBLIC_API
#endif // _MSC_VER
class HTTP_PUBLIC_API HttpRequest {
 public:
  HttpRequest(std::string url) : url_(url) { std::cout << url_ << std::endl; }

  ~HttpRequest();

 private:
  std::string url_;
};