#ifndef COMMON_FUBCTIONS_H_ 
#define COMMON_FUBCTIONS_H_ 


#include "stdfx.h"

//bool isEqual(double x, double y);
template <typename T> 
bool isEqual(T x, T y) 
{

    constexpr T epsilon = static_cast<T>(0.0000001);

    return std::fabs(x - y) < epsilon;
}


#endif  // COMMON_FUBCTIONS_H_ 