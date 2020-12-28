#include "Pointer2DRealization.h"


Pointer2DRealization::Pointer2DRealization(double x, double y) : xCoordinate_(x), yCoordinate_(y) { };

Pointer2DRealization::Pointer2DRealization(const Point2D& rhs) : xCoordinate_(rhs.GetX()), yCoordinate_(rhs.GetY()) { };

double Pointer2DRealization::GetX() const
{
    return xCoordinate_;
}

double Pointer2DRealization::GetY() const
{
    return yCoordinate_;
}

double Pointer2DRealization::SquareOfDistanceToPoint(const Point2D& point) const
{
    double lengthX = xCoordinate_ - point.GetX();
    double lengthY = yCoordinate_ - point.GetY();

    double squareLength = (lengthX * lengthX) + (lengthY * lengthY);

    return squareLength;
}

double Pointer2DRealization::DistanceToPoint(const Point2D& point) const
{
    double squareLength = SquareOfDistanceToPoint(point);

    return std::sqrt(squareLength);
}
