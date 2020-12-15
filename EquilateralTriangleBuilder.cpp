#include "EquilateralTriangleBuilder.h"

EquilateralTriangleBuilder::EquilateralTriangleBuilder(std::unique_ptr<AbstractTriangleBuilder>& nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

EquilateralTriangleBuilder::EquilateralTriangleBuilder() : AbstractTriangleBuilder() {}

std::unique_ptr<AbstractTriangle> EquilateralTriangleBuilder::create(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) {

    return std::make_unique<EquilateralTriangle>(vertexA, vertexB, vertexC);
}