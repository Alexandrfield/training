#include "RightAngledTriangleBuilder.h"

std::unique_ptr<AbstractTriangle> RightAngledTriangleBuilder::create(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) {

    return std::make_unique<RightAngledTriangle>(vertexA, vertexB, vertexC);
}