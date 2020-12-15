#ifndef ARBITRARY_TRIANGLE_H_ 
#define ARBITRARY_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"

class ArbitraryTriangle : public AbstractTriangle
{
public:

    ArbitraryTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
        const std::shared_ptr<Point2D>& vertexC);

    TriangleType GetType();
};
 

#endif  // ARBITRARY_TRIANGLE_H_ 