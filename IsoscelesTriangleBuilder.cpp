#include "IsoscelesTriangleBuilder.h"

IsoscelesTriangleBuilder::IsoscelesTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}


std::unique_ptr<AbstractTriangle> IsoscelesTriangleBuilder::create(const std::shared_ptr<TriangleParameters>& triangle) {

    return std::make_unique<IsoscelesTriangle>(triangle);
}
