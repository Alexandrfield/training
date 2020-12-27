#include "EquilateralTriangleBuilder.h"

EquilateralTriangleBuilder::EquilateralTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

typePointer<AbstractTriangle> EquilateralTriangleBuilder::create(const typePointer<TriangleParameters>& triangle) {

    return typePointer<AbstractTriangle>(new EquilateralTriangle(triangle));
}
