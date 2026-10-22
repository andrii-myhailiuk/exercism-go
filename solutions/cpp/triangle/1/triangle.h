#pragma once

namespace triangle {

// TODO: add your solution here
enum class flavor {
    equilateral,
    isosceles,
    scalene
};

bool check_triangle(double a, double b, double c);
flavor kind(double a, double b, double c);

}  // namespace triangle
