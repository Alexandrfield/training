#include "TriangleBilder.h"

std::unique_ptr<AbstractTriangle> TriangleBilder::BildTriangle(const Point2D& vertexA, const Point2D& vertexB, const Point2D& vertexC)
{
    std::unique_ptr<AbstractTriangle> ptrTriangle;

    try {
        ptrTriangle = std::make_unique<EquilateralTriangle>(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {
        // ignore
    }
    if (ptrTriangle) {
        return ptrTriangle;
    }

    try {
        ptrTriangle = std::make_unique<IsoscelesAndRightAngledTriangle>(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {
        // ignore
    }
    if (ptrTriangle) {
        return ptrTriangle;
    }

    try {
        ptrTriangle = std::make_unique<IsoscelesTriangle>(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {
        // ignore
    }
    if (ptrTriangle) {
        return ptrTriangle;
    }

    try {
        ptrTriangle = std::make_unique<RightAngledTriangle>(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {
        // ignore
    }
    if (ptrTriangle) {
        return ptrTriangle;
    }

    try {
        ptrTriangle = std::make_unique<ArbitraryTriangle>(vertexA, vertexB, vertexC);
    }
    catch (const ObjectIsCanNotCreated& exception) {
        // ignore
    }
    if (ptrTriangle) {
        return ptrTriangle;
    }


    return ptrTriangle;

}