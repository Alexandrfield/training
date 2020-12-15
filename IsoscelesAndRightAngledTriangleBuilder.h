
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

    IsoscelesAndRightAngledTriangleBuilder(std::unique_ptr<AbstractTriangleBuilder>& nextBuilder);
    IsoscelesAndRightAngledTriangleBuilder();

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr <Point2D>& vertexA,
        const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) override;
};

#endif  // BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 