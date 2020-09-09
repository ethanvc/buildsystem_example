#pragma once
#include <string_view>
#include <string>

namespace tproj{
    std::string GetMD5Str(std::string_view s, bool upper_case = true);
}