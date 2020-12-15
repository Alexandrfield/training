#include "TriangleBuilder.h"

TriangleBuilder::TriangleBuilder()
{
    std::unique_ptr<AbstractTriangleBuilder> arbitraryTriangleBuilder_ =
        std::make_unique<ArbitraryTriangleBuilder>();
    std::unique_ptr<AbstractTriangleBuilder> rightAngledTriangleBuilder_ =
        std::make_unique<RightAngledTriangleBuilder>(arbitraryTriangleBuilder_);
    std::unique_ptr<AbstractTriangleBuilder> isoscelesTriangleBuilder_ =
        std::make_unique<IsoscelesTriangleBuilder>(rightAngledTriangleBuilder_);
    std::unique_ptr<AbstractTriangleBuilder> isoscelesAndRightAngledTriangleBuilder_ =
        std::make_unique<IsoscelesAndRightAngledTriangleBuilder>(isoscelesTriangleBuilder_);
    head = std::make_unique<EquilateralTriangleBuilder>(isoscelesAndRightAngledTriangleBuilder_);


  /*  head = std::make_unique<EquilateralTriangleBuilder>(
        std::make_unique<IsoscelesAndRightAngledTriangleBuilder>(
            std::make_unique<IsoscelesTriangleBuilder>(
               std::make_unique<RightAngledTriangleBuilder>(
                    std::make_unique<ArbitraryTriangleBuilder>()))));*/

         
}

std::unique_ptr<AbstractTriangle> TriangleBuilder::buildTriangle(const std::shared_ptr <Point2D>& vertexA, 
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC)
{
    return head->buildTriangle(vertexA, vertexB, vertexC);
}