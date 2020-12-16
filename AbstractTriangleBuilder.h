

#ifndef ABSTRUCT_TRIAGLE_BUILDER_H_ 
#define ABSTRUCT_TRIAGLE_BUILDER_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

class AbstractTriangleBuilder
{
    std::shared_ptr<AbstractTriangleBuilder> next_builder_;

public:

    AbstractTriangleBuilder(std::shared_ptr<AbstractTriangleBuilder> builder);
    //AbstractTriangleBuilder();

    virtual std::unique_ptr<AbstractTriangle> create(const std::shared_ptr<ParametersTriangle>& triangle) = 0;

    std::unique_ptr<AbstractTriangle> buildTriangle(const std::shared_ptr<ParametersTriangle>& triangle);

}; 
#endif  // ABSTRUCT_TRIAGLE_BUILDER_H_ 
