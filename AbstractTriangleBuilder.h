

#ifndef ABSTRUCT_TRIAGLE_BUILDER_H_ 
#define ABSTRUCT_TRIAGLE_BUILDER_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "globalParametrs.h"

class AbstractTriangleBuilder
{
    typePointer<AbstractTriangleBuilder> next_builder_;

public:

    AbstractTriangleBuilder(typePointer<AbstractTriangleBuilder> builder);
    //AbstractTriangleBuilder();

    virtual typePointer<AbstractTriangle> create(const typePointer<TriangleParameters>& triangle) = 0;

    typePointer<AbstractTriangle> buildTriangle(const typePointer<TriangleParameters>& triangle);

}; 
#endif  // ABSTRUCT_TRIAGLE_BUILDER_H_ 
