#include "RightAngledTriangleBuilder.h"

RightAngledTriangleBuilder::RightAngledTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

std::unique_ptr<AbstractTriangle> RightAngledTriangleBuilder::create(const std::shared_ptr<TriangleParameters>& triangle) {

    return std::make_unique<RightAngledTriangle>(triangle);
}