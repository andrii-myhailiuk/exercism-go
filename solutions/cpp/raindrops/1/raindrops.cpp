#include "raindrops.h"
#include <string>

namespace raindrops {

bool divisible_by_num(int drops, int num) {
    return drops % num == 0;
}

std::string convert(int drops){
    std::string result = "";
    if (divisible_by_num(drops, 3)) { result.append("Pling"); }
    if (divisible_by_num(drops, 5)) { result.append("Plang"); }
    if (divisible_by_num(drops, 7)) { result.append("Plong"); }

    return result.empty() ? std::to_string(drops) : result;
}

}  // namespace raindrops
