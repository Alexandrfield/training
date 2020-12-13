#include "ArbitraryTriangleBuilder.h"

std::unique_ptr<AbstractTriangle> ArbitraryTriangleBuilder::create(const std::shared_ptr <Point2D>& vertexA,
    const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) {

    return std::make_unique<ArbitraryTriangle>(vertexA, vertexB, vertexC);
}
