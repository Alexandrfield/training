#ifndef COMMON_FUBCTIONS_H_ 
#define COMMON_FUBCTIONS_H_ 

#include "stdfx.h"

template <typename T> 
bool isEqual(T x, T y) {
    constexpr T epsilon = static_cast<T>(0.0000001);

    return std::fabs(x - y) < epsilon;
}

void print(const std::string& str);

int getInput();

#endif  // COMMON_FUBCTIONS_H_ 