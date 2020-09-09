#include "cloudservice.h"
#include "http/http.h"
#include "inputcore/inputcore.h"
#include "inputconfig/inputconfig.h"
// 依赖目标同时到处了头文件包含路径的情况
#include "http.h"

int main(int argc, char** argv){
  std::cout << "main start" << std::endl;
  HttpRequest http("baidu.com");
  BeginInput(nullptr, nullptr, nullptr);
  std::cout << INPUT_BUILD_VERSION << std::endl;
  std::cout << "main end" << std::endl;
  return 0;
}
