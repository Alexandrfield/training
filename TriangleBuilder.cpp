#include "TriangleBuilder.h"

TriangleBuilder::TriangleBuilder()
{
   // head = temp;
        typePointer<AbstractTriangleBuilder> head(new EquilateralTriangleBuilder(
            typePointer<AbstractTriangleBuilder>( new IsoscelesAndRightAngledTriangleBuilder(
               typePointer<AbstractTriangleBuilder>(new IsoscelesTriangleBuilder(
                    typePointer<AbstractTriangleBuilder>( new RightAngledTriangleBuilder(
                        typePointer<AbstractTriangleBuilder>(new ArbitraryTriangleBuilder(nullptr))))))))));
        head_ = head;
}

typePointer<AbstractTriangle> TriangleBuilder::buildTriangle(const typePointer <Point2D>& vertexA,
    const  typePointer <Point2D>& vertexB, const  typePointer <Point2D>& vertexC)
{
    try {
        typePointer<TriangleParameters> triangle = typePointer<TriangleParameters>(new TriangleParameters(vertexA, vertexB, vertexC));
  
        return head_->buildTriangle(triangle);
    }
    catch (const ParametersAreIncorrect& exception) {

        return typePointer<AbstractTriangle>();
    }
}

