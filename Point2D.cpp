#include "Point2D.h"


Point2D::Point2D(double x, double y): xCoordinate_(x),yCoordinate_(y){ };

Point2D::Point2D(const Point2D& rhs): xCoordinate_(rhs.xCoordinate_),yCoordinate_ (rhs.yCoordinate_) { };

double Point2D::GetX() const
{
    return xCoordinate_;
}

double Point2D::GetY() const
{
    return yCoordinate_;
}

//double Point2D::SquareOfDistanceToPoint(const std::unique_ptr <Point2D>& point) const
double Point2D::SquareOfDistanceToPoint(const Point2D& point) const
{
    double lengthX = xCoordinate_ - point.GetX();
    double lengthY = yCoordinate_ - point.GetY();

    double squareLength = (lengthX * lengthX) + (lengthY * lengthY);

    return squareLength;
}

//double Point2D::DistanceToPoint(const std::unique_ptr <Point2D>& point) const
double Point2D::DistanceToPoint(const Point2D& point) const
{
    double squareLength = SquareOfDistanceToPoint(point);

    return std::sqrt(squareLength);
}

