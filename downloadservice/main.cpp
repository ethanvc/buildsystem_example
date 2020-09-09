#include <iostream>
#include <variant>

#include "base/crypto/md5.h"
int main(int argc, char** argv) {
  std::cout << "main start" << std::endl;
  std::cout << "GetMD5Str:" << tproj::GetMD5Str(" 0") << std::endl;
  std::cout << "main end" << std::endl;
  return 0;
}