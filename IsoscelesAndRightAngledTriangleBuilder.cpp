#include "IsoscelesAndRightAngledTriangleBuilder.h"

std::unique_ptr<AbstractTriangle> IsoscelesAndRightAngledTriangleBuilder::create(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) {

    return std::make_unique<IsoscelesAndRightAngledTriangle>(vertexA, vertexB, vertexC);
}