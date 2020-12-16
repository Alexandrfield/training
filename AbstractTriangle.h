#ifndef TRIAGLE_H_ 
#define TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"
#include "ParametersTriangle.h"

class AbstractTriangle
{
    std::shared_ptr<ParametersTriangle> triangle_;

public:

    AbstractTriangle(const std::shared_ptr<ParametersTriangle>& triangle);

    std::unique_ptr< std::vector<double> > GetSides() const;

    std::unique_ptr<std::vector<Point2D>> GetLPoints() const;

    virtual TriangleType GetType() = 0;

};

#endif  // TRIAGLE_H_ 

 