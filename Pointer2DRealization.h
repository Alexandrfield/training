#ifndef POINT2D_REALIZATION_H_ 
#define POINT2D_REALIZATION_H_ 

#include "stdfx.h"
#include "Point2D.h"

class Pointer2DRealization
{
    double xCoordinate_;
    double yCoordinate_;

    double SquareOfDistanceToPoint(const Point2D& point) const;

public:

    Pointer2DRealization(double x, double y);

    Pointer2DRealization(const Point2D& rhs);

    double GetX() const;
    double GetY() const;

    double DistanceToPoint(const Point2D& point) const;
};

#endif  // POINT2D_REALIZATION_H_ 