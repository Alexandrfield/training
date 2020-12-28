#ifndef ABSTRACT_TRIANGLE_REALIZATION_H_ 
#define ABSTRACT_TRIANGLE_REALIZATION_H_ 

#include "MySmartPointer.h"
#include "TriangleParameters.h"

class AbstactTriangleRealization 
{
    typePointer<TriangleParameters> triangle_;

public:

    AbstactTriangleRealization(const typePointer<TriangleParameters>& triangle);

    typePointer< std::vector<double> > GetSides() const;

    typePointer<std::vector<Point2D>> GetPoints() const;
};

#endif  // ABSTRACT_TRIANGLE_REALIZATION_H_ 
