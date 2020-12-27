#include "ArbitraryTriangleBuilder.h"

ArbitraryTriangleBuilder::ArbitraryTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder) :
    AbstractTriangleBuilder(nextBuilder) {}

//ArbitraryTriangleBuilder::ArbitraryTriangleBuilder() :AbstractTriangleBuilder() {}

typePointer<AbstractTriangle> ArbitraryTriangleBuilder::create(const typePointer<TriangleParameters>& triangle) {

    //return std::make_unique<ArbitraryTriangle>(triangle);
    return typePointer<AbstractTriangle>(new ArbitraryTriangle(triangle));
}
