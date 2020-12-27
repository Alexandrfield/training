
#ifndef BUILDER_ARBITRARY_TRIANGLE_H_ 
#define BUILDER_ARBITRARY_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ArbitraryTriangle.h"
#include "AbstractTriangleBuilder.h"
#include "globalParametrs.h"

class ArbitraryTriangleBuilder : public AbstractTriangleBuilder
{ 
public:

  //  ArbitraryTriangleBuilder();
    ArbitraryTriangleBuilder(typePointer<AbstractTriangleBuilder> nextBuilder);

    typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_ARBITRARY_TRIANGLE_H_ 
