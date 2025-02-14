#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <memory>


#ifdef USE_FLOAT
typedef float value;
#else
typedef double value;
#endif


int main() {
    unsigned n{10000000};
    auto sin_row { std::make_unique<value[]>(n) };

    value summ = 0.0;
    value step = 2 * M_PI / (value)n;
    for (unsigned i = 0; i < n; i++) {
        sin_row[i] = i * step;
        summ += i * step;
    }

    std::cout << summ << "\n";

    return 0;
}

