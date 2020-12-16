
#ifndef BUILDER_ARBITRARY_TRIANGLE_H_ 
#define BUILDER_ARBITRARY_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ArbitraryTriangle.h"
#include "AbstractTriangleBuilder.h"

class ArbitraryTriangleBuilder : public AbstractTriangleBuilder
{ 
public:

  //  ArbitraryTriangleBuilder();
    ArbitraryTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder);

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_ARBITRARY_TRIANGLE_H_ 
