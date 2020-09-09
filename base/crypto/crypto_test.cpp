#include "base/crypto/md5.h"
#include "gtest/gtest.h"

using namespace tproj;

TEST(GetMD5Str, GetMD5Str) {
  ASSERT_EQ(GetMD5Str("0"), "CFCD208495D565EF66E7DFF9F98764DA");
  // 空串的MD5
  ASSERT_EQ(GetMD5Str("", false), "d41d8cd98f00b204e9800998ecf8427e");
}