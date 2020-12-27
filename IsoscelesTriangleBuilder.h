
#ifndef BUILDER_ISOSCELES_TRIANGLE_H_ 
#define BUILDER_ISOSCELES_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "IsoscelesTriangle.h"
#include "AbstractTriangleBuilder.h"
#include "globalParametrs.h"

class IsoscelesTriangleBuilder : public AbstractTriangleBuilder
{
public:

    IsoscelesTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder);

    typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_ISOSCELES_TRIANGLE_H_ 
