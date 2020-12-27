#include "RightAngledTriangleBuilder.h"

RightAngledTriangleBuilder::RightAngledTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

typePointer<AbstractTriangle> RightAngledTriangleBuilder::create(const typePointer<TriangleParameters>& triangle) {

    return typePointer<AbstractTriangle>(new RightAngledTriangle(triangle));
}
