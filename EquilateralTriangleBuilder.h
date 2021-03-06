
#ifndef BUILDER_EQUILATERA_TRIANGLE_H_ 
#define BUILDER_EQUILATERA_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "EquilateralTriangle.h"
#include "AbstractTriangleBuilder.h"

class EquilateralTriangleBuilder : public AbstractTriangleBuilder
{
public:

    EquilateralTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder);
//    EquilateralTriangleBuilder();

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_EQUILATERA_TRIANGLE_H_ 
