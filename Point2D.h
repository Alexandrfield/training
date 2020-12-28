#ifndef POINT2D_H_ 
#define POINT2D_H_ 

#include "stdfx.h"
#include "globalParametrs.h"

class Pointer2DRealization;

class Point2D
{
    typePointer<Pointer2DRealization> pointer_;

public:

    Point2D(double x, double y);
    Point2D(const Point2D& rhs);

    double GetX() const;
    double GetY() const;

    double DistanceToPoint(const Point2D& point) const;
};

#endif  // POINT2D_H_ 
