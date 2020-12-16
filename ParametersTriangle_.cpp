#include "ParametersTriangle.h"

ParametersTriangle::ParametersTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
    const std::shared_ptr<Point2D>& vertexC)
{
    double lengthAB = vertexA->DistanceToPoint(*vertexB);
    double lengthBC = vertexB->DistanceToPoint(*vertexC);
    double lengthAC = vertexA->DistanceToPoint(*vertexC);

    if ((lengthAB + lengthBC <= lengthAC) ||
        (lengthAC + lengthBC <= lengthAB) ||
        (lengthAB + lengthAC <= lengthBC)) {

        throw TriangleIsCanNotCreated();
    }

    triangleABC.reserve(3);
    triangleABC.push_back(std::make_unique<Point2D>(*vertexA));
    triangleABC.push_back(std::make_unique<Point2D>(*vertexB));
    triangleABC.push_back(std::make_unique<Point2D>(*vertexC));

    triangleSide.reserve(3);
    triangleSide.push_back(lengthAB);
    triangleSide.push_back(lengthBC);
    triangleSide.push_back(lengthAC);
}

std::unique_ptr<std::vector< double >> ParametersTriangle::GetSides() const
{
    return std::make_unique<std::vector< double >>(triangleSide);
}

std::unique_ptr<std::vector< Point2D >> ParametersTriangle::GetPoints() const
{
    std::vector< Point2D > lengthSides;
    lengthSides.reserve(3);

    for (size_t index = static_cast<size_t>(0); index < 3; index++) {

        lengthSides.push_back(*triangleABC[index]);
    }

    return std::make_unique<std::vector< Point2D >>(lengthSides);
}