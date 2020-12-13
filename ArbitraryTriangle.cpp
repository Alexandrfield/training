#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
    const std::shared_ptr<Point2D>& vertexC): AbstractTriangle(vertexA, vertexB, vertexC) {};

TriangleTipe ArbitraryTriangle::GetType() 
{
    return TriangleTipe::TRINAGLE_TIPE_ARBITRARY;
}