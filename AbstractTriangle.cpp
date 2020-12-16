#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"

AbstractTriangle::AbstractTriangle(const std::shared_ptr<ParametersTriangle>& triangle): triangle_(triangle) {}

std::unique_ptr< std::vector<double> > AbstractTriangle::GetSides() const
{
   return triangle_->GetSides();
}

std::unique_ptr<std::vector<Point2D>> AbstractTriangle::GetLPoints() const
{
    return triangle_->GetPoints();
}
