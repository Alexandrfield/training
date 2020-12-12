#include "ArbitraryTriangle.h"

ArbitraryTriangle::ArbitraryTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC):  AbstractTriangle(vertexA, vertexB, vertexC) {}

TriangleTipe ArbitraryTriangle::GetType() 
{

    return TriangleTipe::TRINAGLE_TIPE_ARBITRARY;
}