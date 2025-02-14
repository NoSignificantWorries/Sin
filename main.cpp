#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
#include <memory>


#ifdef USE_DOUBLE
typedef double value;
#else
typedef float value;
#endif


int main() {
    unsigned n{10000000};
    auto sin_row { std::make_unique<value[]>(n) };

    value tmp;
    value summ = 0.0;
    value step = 2 * M_PI / (value)n;
    for (unsigned i = 0; i < n; i++) {
        tmp = i * step;
        tmp = sin(tmp);
        sin_row[i] = tmp;
        summ += tmp;
    }

    std::cout << summ << "\n";

    return 0;
}

