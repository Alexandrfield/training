#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC) 
{

    double SquareLengthAB = GetLengthSquareAB();
    double SquareLengthBC = GetLengthSquareBC();
    double SquareLengthAC = GetLengthSquareAC();


    if( (!isEqual(SquareLengthAC, SquareLengthAB)) || (!isEqual(SquareLengthBC, SquareLengthAC)) ){

        throw ObjectIsCanNotCreated();

    }
}

TriangleTipe EquilateralTriangle::GetType()
{

    return TriangleTipe::TRINAGLE_TIPE_EQUILATERAL;
}
