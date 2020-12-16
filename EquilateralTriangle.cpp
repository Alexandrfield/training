#include "EquilateralTriangle.h"

EquilateralTriangle::EquilateralTriangle(const std::shared_ptr<ParametersTriangle>& triangle): AbstractTriangle(triangle)
{
    std::unique_ptr<std::vector<double>> triangleSides = triangle->GetSides();

    if( (!isEqual((*triangleSides)[0], (*triangleSides)[1])) || (!isEqual((*triangleSides)[0], (*triangleSides)[2])) ){

        throw ObjectIsCanNotCreated();
    }
}

TriangleType EquilateralTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_EQUILATERAL;
}
