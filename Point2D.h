#ifndef POINT2D_H_ 
#define POINT2D_H_ 

#include "stdfx.h"

class Point2D
{
    double xCoordinate_;
    double yCoordinate_;

public:

    Point2D(double x, double y);

    Point2D(const Point2D& rhs);

    double GetX() const;
    double GetY() const;

 //   double SquareOfDistanceToPoint(const std::unique_ptr <Point2D>& point) const;
 //   double DistanceToPoint(const std::unique_ptr <Point2D>& point) const;

    double SquareOfDistanceToPoint(const Point2D& point) const;
    double DistanceToPoint(const Point2D& point) const;
};

#endif  // POINT2D_H_ 
