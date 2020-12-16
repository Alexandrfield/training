#include "ArbitraryTriangleBuilder.h"

ArbitraryTriangleBuilder::ArbitraryTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

//ArbitraryTriangleBuilder::ArbitraryTriangleBuilder() :AbstractTriangleBuilder() {}

std::unique_ptr<AbstractTriangle> ArbitraryTriangleBuilder::create(const std::shared_ptr<ParametersTriangle>& triangle) {

    return std::make_unique<ArbitraryTriangle>(triangle);
}
