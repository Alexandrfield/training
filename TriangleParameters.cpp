#include "TriangleParameters.h"

TriangleParameters::TriangleParameters(const typePointer<Point2D>& vertexA, const typePointer<Point2D>& vertexB,
    const typePointer<Point2D>& vertexC)
{
    double lengthAB = vertexA->DistanceToPoint(*vertexB);
    double lengthBC = vertexB->DistanceToPoint(*vertexC);
    double lengthAC = vertexA->DistanceToPoint(*vertexC);

    if ((lengthAB + lengthBC <= lengthAC) ||
        (lengthAC + lengthBC <= lengthAB) ||
        (lengthAB + lengthAC <= lengthBC)) {

        throw ParametersAreIncorrect();
    }

    triangleABC.reserve(3);
    triangleABC.push_back(typePointer<Point2D>(new Point2D (*vertexA)));
    triangleABC.push_back(typePointer<Point2D>(new Point2D (*vertexB)));
    triangleABC.push_back(typePointer<Point2D>(new Point2D (*vertexC)));

    triangleSide.reserve(3);
    triangleSide.push_back(lengthAB);
    triangleSide.push_back(lengthBC);
    triangleSide.push_back(lengthAC);
}

typePointer<std::vector< double >> TriangleParameters::GetSides() const
{
    return typePointer<std::vector< double >>(new std::vector< double >(triangleSide));
}

typePointer<std::vector< Point2D >> TriangleParameters::GetPoints() const
{
    std::vector< Point2D > lengthSides;
    lengthSides.reserve(3);

    for (size_t index = static_cast<size_t>(0); index < 3; index++) {

        lengthSides.push_back(*triangleABC[index]);
    }

    return typePointer<std::vector< Point2D >>(new std::vector< Point2D >(lengthSides));
}
