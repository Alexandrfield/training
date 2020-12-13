#include "TriangleBuilder.h"

TriangleBuilder::TriangleBuilder()
{
    equilateralTriangleBuilder_ = std::make_shared<EquilateralTriangleBuilder>();
    isoscelesAndRightAngledTriangleBuilder_ = std::make_shared<IsoscelesAndRightAngledTriangleBuilder>();
    isoscelesTriangleBuilder_ = std::make_shared<IsoscelesTriangleBuilder>();
    rightAngledTriangleBuilder_ = std::make_shared<RightAngledTriangleBuilder>();
    arbitraryTriangleBuilder_ = std::make_shared<ArbitraryTriangleBuilder>();

    equilateralTriangleBuilder_->setNext(isoscelesAndRightAngledTriangleBuilder_)->setNext(isoscelesTriangleBuilder_)->
        setNext(rightAngledTriangleBuilder_)->setNext(arbitraryTriangleBuilder_);
}

std::unique_ptr<AbstractTriangle> TriangleBuilder::buildTriangle(const std::shared_ptr <Point2D>& vertexA, 
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC)
{
    return equilateralTriangleBuilder_->buildTriangle(vertexA, vertexB, vertexC);
}