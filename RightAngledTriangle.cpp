#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC): AbstractTriangle(vertexA, vertexB, vertexC)
{
    double SquareLengthAB = GetLengthSquareAB();
    double SquareLengthBC = GetLengthSquareBC();
    double SquareLengthAC = GetLengthSquareAC();
        
    // test ightAngledTriangle:
    if( !isEqual( SquareLengthAB + SquareLengthBC, SquareLengthAC ) &&  
        !isEqual( SquareLengthAB + SquareLengthAC, SquareLengthBC ) &&  
        !isEqual( SquareLengthAC + SquareLengthBC, SquareLengthAB ) ){

        throw ObjectIsCanNotCreated();
    }

}

TriangleTipe RightAngledTriangle::GetType()
{

    return TriangleTipe::TRINAGLE_TIPE_RIGHT_ANGLED;
}