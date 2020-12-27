#ifndef ARBITRARY_TRIANGLE_H_ 
#define ARBITRARY_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"
#include "globalParametrs.h"

class ArbitraryTriangle : public AbstractTriangle
{
public:

    ArbitraryTriangle(const typePointer<TriangleParameters>& triangle);

    TriangleType GetType();
};
 

#endif  // ARBITRARY_TRIANGLE_H_ 
