#include "hamming.h"
#include <stdexcept>
#include <string>

namespace hamming {

int compute(std::string a , std::string b){
    if (a.length() != b.length()){
        throw std::domain_error("");
    }
    
    int diff = 0;
    int len = a.length();

    for (int i = 0; i < len; i++){
        if (a[i] != b[i]) {
            diff++;
        }
    }
    return diff;
}

}  // namespace hamming
