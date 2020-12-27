
#ifndef BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 
#define BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "IsoscelesAndRightAngledTriangle.h"
#include "AbstractTriangleBuilder.h"
#include "globalParametrs.h"

class IsoscelesAndRightAngledTriangleBuilder : public AbstractTriangleBuilder
{
public:

    IsoscelesAndRightAngledTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder);

    typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 
