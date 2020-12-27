#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(const typePointer<TriangleParameters>& triangle): AbstractTriangle(triangle)
{
    typePointer<std::vector<double>> triangleSides = triangle->GetSides();

    // test ightAngledTriangle:
    std::sort((*triangleSides).begin(), (*triangleSides).end());
    if (!isEqual((*triangleSides)[0] * (*triangleSides)[0] + (*triangleSides)[1] * (*triangleSides)[1],
        (*triangleSides)[2] * (*triangleSides)[2])) {

        throw ObjectIsCanNotCreated();
    }
}

TriangleType RightAngledTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_RIGHT_ANGLED;
}
