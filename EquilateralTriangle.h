#ifndef EQUILATERAL_TRIANGLE_H_ 
#define EQUILATERAL_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"
#include "common_function.h"

class EquilateralTriangle : public AbstractTriangle
{
public:

    EquilateralTriangle(const std::shared_ptr<ParametersTriangle>& triangle);

    virtual TriangleType GetType();
};


#endif  // EQUILATERAL_TRIANGLE_H_ 