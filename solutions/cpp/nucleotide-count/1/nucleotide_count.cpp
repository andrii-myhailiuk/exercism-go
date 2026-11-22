#include "nucleotide_count.h"
#include <stdexcept>

namespace nucleotide_count {

std::map<char, int> count(std::string dna) {
    std::map<char, int> res{{'A', 0}, {'C', 0}, {'G', 0}, {'T', 0}};

    for (auto chr : dna){
        try {
            res.at(chr) += 1;
        }
        catch (const std::out_of_range& e) {
            throw std::invalid_argument("");
        }
    }
    return res;
}

}  // namespace nucleotide_count
