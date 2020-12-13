#include "IsoscelesAndRightAngledTriangle.h"

IsoscelesAndRightAngledTriangle::IsoscelesAndRightAngledTriangle(const std::shared_ptr<Point2D>& vertexA, 
    const std::shared_ptr<Point2D>& vertexB, const std::shared_ptr<Point2D>&  vertexC): AbstractTriangle(vertexA, vertexB, vertexC) 
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

    // test Isosceles:
    if( !isEqual(SquareLengthAC, SquareLengthAB) &&  
        !isEqual(SquareLengthBC, SquareLengthAB) && 
        !isEqual(SquareLengthBC, SquareLengthAC) ){

        throw ObjectIsCanNotCreated();
    }
}

TriangleTipe IsoscelesAndRightAngledTriangle::GetType()
{
    return TriangleTipe::TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED;
}
