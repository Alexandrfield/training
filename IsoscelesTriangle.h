#ifndef ISOSCELES_TRIANGLE_H_ 
#define ISOSCELES_TRIANGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "enums.h"
#include "common_function.h"

class IsoscelesTriangle : public AbstractTriangle
{
public:

    IsoscelesTriangle(const std::shared_ptr<ParametersTriangle>& triangle);

    virtual TriangleType GetType();
};

 

#endif  // ISOSCELES_TRIANGLE_H_ 