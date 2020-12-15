#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
    const std::shared_ptr<Point2D>& vertexC): AbstractTriangle(vertexA, vertexB, vertexC) {};

TriangleType ArbitraryTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_ARBITRARY;
}