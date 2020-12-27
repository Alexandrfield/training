#ifndef COMMON_FUBCTIONS_H_ 
#define COMMON_FUBCTIONS_H_ 

#include "stdfx.h"
#include "globalParametrs.h"

template <typename T> 
bool isEqual(T x, T y) {
    constexpr T epsilon = static_cast<T>(cEpsilon);

    return std::fabs(x - y) < epsilon;
}

void print(const std::string& str);

int getInput();

#endif  // COMMON_FUBCTIONS_H_ 
