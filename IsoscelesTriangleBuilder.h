
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

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr <Point2D>& vertexA,
        const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) override;
};

#endif  // BUILDER_ISOSCELES_TRIANGLE_H_ 