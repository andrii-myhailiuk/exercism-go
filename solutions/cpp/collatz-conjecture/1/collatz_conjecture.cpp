#include "collatz_conjecture.h"
#include <stdexcept>

namespace collatz_conjecture {

int steps(int number) {
    if (number < 1) {
        throw std::domain_error("");
    }

    int step_num = 0;
    while (number != 1) {
        if (number % 2 != 0){
            number = number * 3 + 1;
        }else {
            number /= 2;
        }
        step_num++;
    }
    return step_num;
}

}  // namespace collatz_conjecture
