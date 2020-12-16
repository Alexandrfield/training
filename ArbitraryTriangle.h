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

    ArbitraryTriangle(const std::shared_ptr<ParametersTriangle>& triangle);

    TriangleType GetType();
};
 

#endif  // ARBITRARY_TRIANGLE_H_ 