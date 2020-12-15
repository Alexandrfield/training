#include "IsoscelesTriangleBuilder.h"

IsoscelesTriangleBuilder::IsoscelesTriangleBuilder(std::unique_ptr<AbstractTriangleBuilder>& nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

IsoscelesTriangleBuilder::IsoscelesTriangleBuilder() : AbstractTriangleBuilder() {}

std::unique_ptr<AbstractTriangle> IsoscelesTriangleBuilder::create(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) {

    return std::make_unique<IsoscelesTriangle>(vertexA, vertexB, vertexC);
}