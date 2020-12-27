
#ifndef BUILDER_EQUILATERA_TRIANGLE_H_ 
#define BUILDER_EQUILATERA_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "EquilateralTriangle.h"
#include "AbstractTriangleBuilder.h"
#include "globalParametrs.h"

class EquilateralTriangleBuilder : public AbstractTriangleBuilder
{
public:

    EquilateralTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder);
//    EquilateralTriangleBuilder();

    typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_EQUILATERA_TRIANGLE_H_ 
