#ifndef TRIAGLE_H_ 
#define TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"
#include "TriangleParameters.h"
#include "globalParametrs.h"

class AbstactTriangleRealization;

class AbstractTriangle
{
    typePointer<AbstactTriangleRealization> pounterRealization;

public:

    AbstractTriangle(const typePointer<TriangleParameters>& triangle);

    typePointer< std::vector<double> > GetSides() const;

    typePointer<std::vector<Point2D>> GetLPoints() const;

    virtual TriangleType GetType() = 0;

};

#endif  // TRIAGLE_H_ 


 