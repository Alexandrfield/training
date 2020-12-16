#ifndef PARAMETERS_TRIAGLE_H_ 
#define PARAMETERS_TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"
#include "ObjectIsCanNotCreated.h"

class ParametersTriangle
{
    // triangleABC[0] = A; triangleABC[1] = B; triangleABC[2] = C
    std::vector< std::unique_ptr<Point2D> > triangleABC;

    // triangleSide[0] = AB; triangleSide[1] = BC; triangleSide[2] = AC
    std::vector< double > triangleSide;

public:

    ParametersTriangle(const std::shared_ptr<Point2D>& vertexA, const std::shared_ptr<Point2D>& vertexB,
        const std::shared_ptr<Point2D>& vertexC);

    std::unique_ptr<std::vector< double >> GetSides() const;
    std::unique_ptr<std::vector< Point2D >> GetPoints() const;

};

#endif  // PARAMETERS_TRIAGLE_H_ 

