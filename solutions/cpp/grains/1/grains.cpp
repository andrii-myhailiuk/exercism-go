#include "grains.h"

namespace grains {

unsigned long long square(int num) {
    return 1ULL << (num - 1);
}

unsigned long long total() {
    return ~0ULL;
}

}  // namespace grains
