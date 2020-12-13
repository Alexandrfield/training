 #include "IsoscelesTriangle.h"

 IsoscelesTriangle::IsoscelesTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB, 
     const std::shared_ptr<Point2D>& vertexC): AbstractTriangle(vertexA, vertexB, vertexC)
 {
    double SquareLengthAB = GetLengthSquareAB();
    double SquareLengthBC = GetLengthSquareBC();
    double SquareLengthAC = GetLengthSquareAC();

    // test Isosceles:
    if( !isEqual(SquareLengthAC, SquareLengthAB) &&  
        !isEqual(SquareLengthBC, SquareLengthAB) && 
        !isEqual(SquareLengthBC, SquareLengthAC) ){

        throw ObjectIsCanNotCreated();
    }
}

TriangleTipe IsoscelesTriangle::GetType()
{
    return TriangleTipe::TRINAGLE_TIPE_ISOSCELES;
}