#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

AbstractTriangle::AbstractTriangle(const typePointer<TriangleParameters>& triangle): triangle_(triangle) {}

typePointer< std::vector<double> > AbstractTriangle::GetSides() const
{
   return triangle_->GetSides();
}

typePointer<std::vector<Point2D>> AbstractTriangle::GetLPoints() const
{
    return triangle_->GetPoints();
}
