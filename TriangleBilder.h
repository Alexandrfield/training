#ifndef BILDER_TRIANGLE_H_ 
#define BILDER_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

#include "EquilateralTriangle.h"
#include "IsoscelesTriangle.h"
#include "IsoscelesAndRightAngledTriangle.h"
#include "RightAngledTriangle.h"
#include "ArbitraryTriangle.h"
#include "enums.h"

class TriangleBilder
{
public:

    std::unique_ptr<AbstractTriangle> BildTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);
};

#endif  // BILDER_TRIANGLE_H_ 