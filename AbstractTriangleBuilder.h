

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

    AbstractTriangleBuilder();

    virtual std::unique_ptr<AbstractTriangle> create(const std::shared_ptr <Point2D>& vertexA, const  std::shared_ptr <Point2D>& vertexB,
        const  std::shared_ptr <Point2D>& vertexC) = 0;

    std::shared_ptr<AbstractTriangleBuilder> setNext(std::shared_ptr<AbstractTriangleBuilder> builder);

    std::unique_ptr<AbstractTriangle> buildTriangle(const std::shared_ptr <Point2D>& vertexA, const  std::shared_ptr <Point2D>& vertexB,
        const  std::shared_ptr <Point2D>& vertexC);
}; 
#endif  // ABSTRUCT_TRIAGLE_BUILDER_H_ 
