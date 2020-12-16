 #include "IsoscelesTriangle.h"

 IsoscelesTriangle::IsoscelesTriangle(const std::shared_ptr<ParametersTriangle>& triangle): AbstractTriangle(triangle)
 {
     std::unique_ptr<std::vector<double>> triangleSides = triangle->GetSides();

     // test Isosceles:
     if (!isEqual((*triangleSides)[0], (*triangleSides)[1]) &&
         !isEqual((*triangleSides)[0], (*triangleSides)[2]) &&
         !isEqual((*triangleSides)[1], (*triangleSides)[2])) {

         throw ObjectIsCanNotCreated();
     }
}

 TriangleType IsoscelesTriangle::GetType()
{
    return TriangleType::TRINAGLE_TYPE_ISOSCELES;
}