#include "Point2D.h"
#include "Pointer2DRealization.h"

Point2D::Point2D(double x, double y)
{
    pointer_ = new Pointer2DRealization(x, y);
};

Point2D::Point2D(const Point2D& rhs)
{
    pointer_ = new Pointer2DRealization(rhs);
};

double Point2D::GetX() const
{
    return pointer_->GetX();
}

double Point2D::GetY() const
{
    return pointer_->GetY();
}

double Point2D::DistanceToPoint(const Point2D& point) const
{
    return pointer_->DistanceToPoint(point);
}

