#ifndef RIGHT_ANGLED_TRIANGLE_H_ 
#define RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"
#include "common_function.h"


class RightAngledTriangle : public AbstractTriangle
{
    public:

    RightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    virtual TriangleTipe GetType();

};
 

#endif  // RIGHT_ANGLED_TRIANGLE_H_ 