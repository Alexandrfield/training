#ifndef BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 
#define BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "RightAngledTriangle.h"
#include "AbstractTriangleBuilder.h"

class RightAngledTriangleBuilder : public AbstractTriangleBuilder
{
public:

    RightAngledTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> nextBuilder);

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<TriangleParameters>& triangle) override;
};

#endif  // BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 
