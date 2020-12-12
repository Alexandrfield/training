#ifndef ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 
#define ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"
#include "common_function.h"


class IsoscelesAndRightAngledTriangle : public AbstractTriangle
{
public:

    IsoscelesAndRightAngledTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    virtual TriangleTipe GetType();
};

#endif  // ISOSCELES_RIGHT_ANGLED_TRIANGLE_H_ 