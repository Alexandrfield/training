#ifndef ABSTRUCT_BUILDER_H_ 
#define ABSTRUCT_BUILDER_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"

class AbstractBuilder 
{
public:

    virtual AbstractBuilder* SetNext(AbstractBuilder* handler) = 0;
    virtual  std::unique_ptr<AbstractTriangle> build(const  std::shared_ptr <Point2D>* vertexA, const Point2D* vertexB, const Point2D* vertexC) = 0;
};

#endif  // ABSTRUCT_BUILDER_H_ 