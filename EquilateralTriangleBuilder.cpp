#include "EquilateralTriangleBuilder.h"

EquilateralTriangleBuilder::EquilateralTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

std::unique_ptr<AbstractTriangle> EquilateralTriangleBuilder::create(const std::shared_ptr<TriangleParameters>& triangle) {

    return std::make_unique<EquilateralTriangle>(triangle);
}
