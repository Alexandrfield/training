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

    RightAngledTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
        const std::shared_ptr<Point2D>& vertexC);

    virtual TriangleType GetType();
};


#endif  // RIGHT_ANGLED_TRIANGLE_H_ 