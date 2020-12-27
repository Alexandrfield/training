#ifndef BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 
#define BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "RightAngledTriangle.h"
#include "AbstractTriangleBuilder.h"
#include "globalParametrs.h"

class RightAngledTriangleBuilder : public AbstractTriangleBuilder
{
public:

    RightAngledTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder);

    typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 
