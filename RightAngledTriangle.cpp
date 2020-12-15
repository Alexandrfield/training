#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB, 
    const std::shared_ptr<Point2D>& vertexC): AbstractTriangle(vertexA, vertexB, vertexC)
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

TriangleType RightAngledTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_RIGHT_ANGLED;
}