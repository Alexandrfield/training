#ifndef TRIAGLE_H_ 
#define TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"

class AbstractTriangle
{
    std::vector<Point2D> triangleABC;

    public:

    AbstractTriangle(const Point2D &vertexA, const Point2D &vertexB, const Point2D &vertexC);

    double GetLengthSquareAB() const;

    double GetLengthSquareBC() const;
 
    double GetLengthSquareAC() const;

    double GetLengthAB() const;

    double GetLengthBC() const;
    
    double GetLengthAC() const;

    virtual TriangleTipe GetType() = 0;
};


 

#endif  // TRIAGLE_H_ 

 