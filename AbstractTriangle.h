#ifndef TRIAGLE_H_ 
#define TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"

class AbstractTriangle
{
    std::vector< std::shared_ptr<Point2D> > triangleABC;

public:

    AbstractTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
        const std::shared_ptr<Point2D>& vertexC);

    double GetLengthSquareAB() const;

    double GetLengthSquareBC() const;
 
    double GetLengthSquareAC() const;

    double GetLengthAB() const;

    double GetLengthBC() const;
    
    double GetLengthAC() const;

    virtual TriangleTipe GetType() = 0;
};

#endif  // TRIAGLE_H_ 

 