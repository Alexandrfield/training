#include "AbstactTriangleRealization.h"

#include "ArbitraryTriangle.h"

AbstactTriangleRealization::AbstactTriangleRealization(const typePointer<TriangleParameters>& triangle): triangle_(triangle) {}

typePointer< std::vector<double> > AbstactTriangleRealization::GetSides() const
{
    return triangle_->GetSides();
}

typePointer<std::vector<Point2D>> AbstactTriangleRealization::GetPoints() const
{
    return triangle_->GetPoints();
}