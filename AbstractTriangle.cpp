#include "AbstractTriangle.h"
#include "ObjectIsCanNotCreated.h"
#include "AbstactTriangleRealization.h"


AbstractTriangle::AbstractTriangle(const typePointer<TriangleParameters>& triangle)
{
    pounterRealization = new AbstactTriangleRealization(triangle);
}

typePointer< std::vector<double> > AbstractTriangle::GetSides() const
{
   return pounterRealization->GetSides();
}

typePointer<std::vector<Point2D>> AbstractTriangle::GetLPoints() const
{
    return pounterRealization->GetPoints();
}
