#include "difference_of_squares.h"
#include <cmath>

namespace difference_of_squares {

int square_of_sum(int n){
    return std::pow((n + 1) * (n / 2.0), 2 );
}

int sum_of_squares(int n) {
    if (n == 1) {return 1;}
    return n * n + sum_of_squares(n - 1);
}

int difference(int n) {
    return square_of_sum(n) - sum_of_squares(n);
}
}  // namespace difference_of_squares
