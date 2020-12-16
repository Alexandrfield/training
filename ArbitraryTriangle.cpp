#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const std::shared_ptr<ParametersTriangle>& triangle): AbstractTriangle(triangle) {};

TriangleType ArbitraryTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_ARBITRARY;
}