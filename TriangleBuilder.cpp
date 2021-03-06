#include "TriangleBuilder.h"

TriangleBuilder::TriangleBuilder()
{

    head = std::make_shared<EquilateralTriangleBuilder>(
        std::make_shared<IsoscelesAndRightAngledTriangleBuilder>(
            std::make_shared<IsoscelesTriangleBuilder>(
               std::make_shared<RightAngledTriangleBuilder>(
                    std::make_shared<ArbitraryTriangleBuilder>(nullptr)))));

         
}

std::unique_ptr<AbstractTriangle> TriangleBuilder::buildTriangle(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC)
{
    try {
        std::shared_ptr<TriangleParameters> triangle = std::make_shared<TriangleParameters>(vertexA, vertexB, vertexC);
  
        return head->buildTriangle(triangle);
    }
    catch (const ParametersAreIncorrect& exception) {

        return std::unique_ptr<AbstractTriangle>();
    }
}

