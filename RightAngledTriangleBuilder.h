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

    RightAngledTriangleBuilder(std::unique_ptr<AbstractTriangleBuilder>& nextBuilder);
    RightAngledTriangleBuilder();

    std::unique_ptr<AbstractTriangle> create(const std::shared_ptr <Point2D>& vertexA,
        const  std::shared_ptr <Point2D>& vertexB, const  std::shared_ptr <Point2D>& vertexC) override;
};

#endif  // BUILDER_RIGHT_ANGLED_TRIANGLE_H_ 