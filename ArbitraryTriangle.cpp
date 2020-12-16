#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const std::shared_ptr<TriangleParameters>& triangle): AbstractTriangle(triangle) {};

TriangleType ArbitraryTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_ARBITRARY;
}