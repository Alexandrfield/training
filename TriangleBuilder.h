#ifndef BILDER_TRIANGLE_H_ 
#define BILDER_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

#include "EquilateralTriangleBuilder.h"
#include "IsoscelesTriangleBuilder.h"
#include "IsoscelesAndRightAngledTriangleBuilder.h"
#include "RightAngledTriangleBuilder.h"
#include "ArbitraryTriangleBuilder.h"
#include "enums.h"

class TriangleBuilder
{
    std::shared_ptr<AbstractTriangleBuilder> equilateralTriangleBuilder_;
    std::shared_ptr<AbstractTriangleBuilder> isoscelesAndRightAngledTriangleBuilder_;
    std::shared_ptr<AbstractTriangleBuilder> isoscelesTriangleBuilder_;
    std::shared_ptr<AbstractTriangleBuilder> rightAngledTriangleBuilder_;
    std::shared_ptr<AbstractTriangleBuilder> arbitraryTriangleBuilder_;

public:

    TriangleBuilder();

    std::unique_ptr<AbstractTriangle> buildTriangle(const std::shared_ptr <Point2D>& vertexA, const  std::shared_ptr <Point2D>& vertexB,
        const  std::shared_ptr <Point2D>& vertexC);
};

#endif  // BILDER_TRIANGLE_H_ 