#include "md5.h"

#include "openssl/md5.h"

namespace tproj {
std::string GetMD5Str(std::string_view s, bool upper_case) {
  MD5_CTX ctx;
  uint8_t result_buffer[MD5_DIGEST_LENGTH + 2] = {0};
  MD5_Init(&ctx);
  MD5_Update(&ctx, s.data(), s.size());
  MD5_Final(result_buffer, &ctx);
  const char* s_lower_case_table = "0123456789abcdef";
  const char* s_upper_case_table = "0123456789ABCDEF";
  char result_hex_str[2 * MD5_DIGEST_LENGTH + 2] = {0};
  const char* target_table =
      upper_case ? s_upper_case_table : s_lower_case_table;
  for (int i = 0; i < MD5_DIGEST_LENGTH; ++i) {
    result_hex_str[2 * i] = target_table[result_buffer[i] >> 4];
    result_hex_str[2 * i + 1] = target_table[result_buffer[i] & 0x0F];
  }
  return result_hex_str;
}
}  // namespace tproj