#ifndef BILDER_TRIANGLE_H_ 
#define BILDER_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

#include "EquilateralTriangleBuilder.h"
#include "IsoscelesTriangleBuilder.h"
#include "IsoscelesAndRightAngledTriangleBuilder.h"
#include "RightAngledTriangleBuilder.h"
#include "ArbitraryTriangleBuilder.h"
#include "enums.h"
#include "globalParametrs.h"

class TriangleBuilder
{
    typePointer<AbstractTriangleBuilder> head_;

public:

    TriangleBuilder();

    typePointer<AbstractTriangle> buildTriangle(const typePointer<Point2D>& vertexA,
        const  typePointer<Point2D>& vertexB, const  typePointer<Point2D>& vertexC);
};

#endif  // BILDER_TRIANGLE_H_ 
