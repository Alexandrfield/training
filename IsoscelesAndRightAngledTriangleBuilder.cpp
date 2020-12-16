#include "IsoscelesAndRightAngledTriangleBuilder.h"

IsoscelesAndRightAngledTriangleBuilder::IsoscelesAndRightAngledTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}


std::unique_ptr<AbstractTriangle> IsoscelesAndRightAngledTriangleBuilder::create(const std::shared_ptr<ParametersTriangle>& triangle) {

    return std::make_unique<IsoscelesAndRightAngledTriangle>(triangle);
}