#include "IsoscelesTriangleBuilder.h"

IsoscelesTriangleBuilder::IsoscelesTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}


typePointer<AbstractTriangle> IsoscelesTriangleBuilder::create(const typePointer<TriangleParameters>& triangle) {

    return typePointer<AbstractTriangle>(new IsoscelesTriangle(triangle));
}
