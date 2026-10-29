#pragma once

#include <string>

namespace pangram {

void count_letters(const std::string& s, bool letters[]);
bool is_pangram(std::string s);

}  // namespace pangram
