
#ifndef BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 
#define BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "IsoscelesAndRightAngledTriangle.h"
#include "AbstractTriangleBuilder.h"

class IsoscelesAndRightAngledTriangleBuilder : public AbstractTriangleBuilder
{
public:

    IsoscelesAndRightAngledTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder);

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<ParametersTriangle>& triangle) override;
};

#endif  // BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 