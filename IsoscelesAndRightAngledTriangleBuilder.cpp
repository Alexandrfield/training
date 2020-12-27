#include "IsoscelesAndRightAngledTriangleBuilder.h"

IsoscelesAndRightAngledTriangleBuilder::IsoscelesAndRightAngledTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}


typePointer<AbstractTriangle> IsoscelesAndRightAngledTriangleBuilder::create(const typePointer <TriangleParameters>& triangle) {

    return typePointer<AbstractTriangle>(new IsoscelesAndRightAngledTriangle(triangle));
}
