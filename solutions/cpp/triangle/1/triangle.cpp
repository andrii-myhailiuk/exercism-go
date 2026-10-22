#include "triangle.h"
#include <stdexcept>

namespace triangle {

bool check_triangle(double a, double b, double c){
    bool none_side_is_zero = a && b && c;
    bool a_less = a < b + c; 
    bool b_less = b < a + c; 
    bool c_less = c < a + b;
    
    return none_side_is_zero && a_less && b_less && c_less;
}

flavor kind(double a, double b, double c) {
    if (!check_triangle(a, b, c)) { throw std::domain_error("Invalid triangle"); };
    if (a == b && b == c) { return flavor::equilateral;}
    if (a == b || b == c || a == c) { return flavor::isosceles; }
    
    return flavor::scalene;
}

}  // namespace triangle
