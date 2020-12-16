
#ifndef BUILDER_ISOSCELES_TRIANGLE_H_ 
#define BUILDER_ISOSCELES_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "IsoscelesTriangle.h"
#include "AbstractTriangleBuilder.h"

class IsoscelesTriangleBuilder : public AbstractTriangleBuilder
{
public:

    IsoscelesTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder);

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_ISOSCELES_TRIANGLE_H_ 
