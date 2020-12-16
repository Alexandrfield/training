
#include "stdfx.h"
#include "AbstractTriangle.h"
#include "Point2D.h"
#include "TriangleBuilder.h"
#include "common_function.h"
#include "VocabularyTriangleType.h"

int main(){

    int counter_experiment = 0;

    int vertexAX = 0, vertexAY = 0;
    int vertexBX = 0, vertexBY = 0;
    int vertexCX = 0, vertexCY = 0;

    print(" enter count experiment" );
   
    counter_experiment = getInput();

    TriangleBuilder bilderObjectTriangle;


    for(int index = 0; index < counter_experiment; index++){

        print(" vertex A: ");
        vertexAX = getInput();
        vertexAY = getInput();
        std::shared_ptr<Point2D> vertexA;
        vertexA = std::make_shared<Point2D>(vertexAX, vertexAY);
        

        print(" vertex B: " );
        vertexBX = getInput();
        vertexBY = getInput();
        std::shared_ptr<Point2D> vertexB;
        vertexB = std::make_shared<Point2D>(vertexBX, vertexBY);

        print(" vertex C: " );
        vertexCX = getInput();
        vertexCY = getInput();
        std::shared_ptr<Point2D> vertexC;
        vertexC = std::make_shared<Point2D>(vertexCX, vertexCY);

       try{

          std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.buildTriangle(vertexA, vertexB, vertexC);

          if( pointerToTriagle ) {

              TriangleType typeTrianfle = pointerToTriagle->GetType();

              print(VocabularyTriangleType::enumTriangleTypeToString(typeTrianfle));

          } else {
              print("ERROR! triangle is can't created");
          }

        }
        catch(std::exception &exept){
            print("EXEPTION: " + std::string(exept.what()));
        }
    }

    print("end");
    getchar();

    return 0;
}