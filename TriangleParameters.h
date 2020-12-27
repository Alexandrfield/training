#ifndef PARAMETERS_TRIAGLE_H_ 
#define PARAMETERS_TRIAGLE_H_ 

#include "stdfx.h"
#include "Point2D.h"
#include "enums.h"
#include "ObjectIsCanNotCreated.h"
#include "globalParametrs.h"

class TriangleParameters
{
    // triangleABC[0] = A; triangleABC[1] = B; triangleABC[2] = C
    std::vector<typePointer<Point2D> > triangleABC;

    // triangleSide[0] = AB; triangleSide[1] = BC; triangleSide[2] = AC
    std::vector< double > triangleSide;

public:

    TriangleParameters(const typePointer<Point2D>& vertexA, const typePointer<Point2D>& vertexB,
        const typePointer<Point2D>& vertexC);

    typePointer<std::vector< double >> GetSides() const;
    typePointer<std::vector< Point2D >> GetPoints() const;

};

#endif  // PARAMETERS_TRIAGLE_H_ 

