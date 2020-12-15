#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

AbstractTriangle::AbstractTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
    const std::shared_ptr<Point2D>& vertexC)
{
     
    double lengthAB = vertexA->DistanceToPoint(*vertexB);
    double lengthBC = vertexB->DistanceToPoint(*vertexC);
    double lengthAC = vertexA->DistanceToPoint(*vertexC);

    if( (lengthAB + lengthBC <= lengthAC) ||
        (lengthAC + lengthBC <= lengthAB) ||
        (lengthAB + lengthAC <= lengthBC) ){

         throw ObjectIsCanNotCreated();
    }

    triangleABC.reserve(3);

    triangleABC.push_back(std::make_unique<Point2D>(*vertexA));
    triangleABC.push_back(std::make_unique<Point2D>(*vertexB));
    triangleABC.push_back(std::make_unique<Point2D>(*vertexC));
    
}

double AbstractTriangle::GetLengthSquareAB() const 
{
    return triangleABC[0]->SquareOfDistanceToPoint(*triangleABC[1]);
}

double AbstractTriangle::GetLengthSquareBC() const 
{
    return triangleABC[1]->SquareOfDistanceToPoint(*triangleABC[2]);
}
 
double AbstractTriangle::GetLengthSquareAC() const 
{
    return triangleABC[0]->SquareOfDistanceToPoint(*triangleABC[2]);
}

double AbstractTriangle::GetLengthAB() const 
{
    return triangleABC[0]->DistanceToPoint(*triangleABC[1]);
}

double AbstractTriangle::GetLengthBC() const 
{
    return triangleABC[1]->DistanceToPoint(*triangleABC[2]);
}
    
double AbstractTriangle::GetLengthAC() const 
{
    return triangleABC[0]->DistanceToPoint(*triangleABC[2]);
}

   
