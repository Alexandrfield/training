#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const typePointer<TriangleParameters>& triangle): AbstractTriangle(triangle) {};

TriangleType ArbitraryTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_ARBITRARY;
}
