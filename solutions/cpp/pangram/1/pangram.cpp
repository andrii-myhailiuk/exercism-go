#include "pangram.h"
#include <string>

namespace pangram {
const int ascii_size = 128;

void count_letters(const std::string& s, bool letters[]) {
    for (auto chr : s) {
        letters[static_cast<unsigned char>(chr)] = true;
    }
}

bool is_pangram(std::string s) {
    bool letters[ascii_size]{};
    count_letters(s, letters);

    for(int i = 65; i <= 90; i++) {
        if (!(letters[i] | letters[i+32])) {
            return false;
        }
    }
    return true;
}


}  // namespace pangram