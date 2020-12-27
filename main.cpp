
#include "stdfx.h"
#include "AbstractTriangle.h"
#include "Point2D.h"
#include "TriangleBuilder.h"
#include "common_function.h"
#include "VocabularyTriangleType.h"
#include "globalParametrs.h"

int main(){

    srand(static_cast<unsigned int>(time(0)));

    int counter_experiment = 0;

    int vertexAX = 0, vertexAY = 0;
    int vertexBX = 0, vertexBY = 0;
    int vertexCX = 0, vertexCY = 0;

 //   print(" enter count experiment" );
   
    //counter_experiment = getInput();
    counter_experiment = 100000;

    TriangleBuilder bilderObjectTriangle;

    std::cout << "start" << std::endl;
    auto start = std::chrono::system_clock::now();
    for(int index = 0; index < counter_experiment; index++){

    //    print(" vertex A: ");
        vertexAX = getInput();
        vertexAY = getInput();
        typePointer<Point2D> vertexA(new Point2D(vertexAX, vertexAY));
       // vertexA = std::make_shared<Point2D>(vertexAX, vertexAY);


     //   print(" vertex B: " );
        vertexBX = getInput();
        vertexBY = getInput();
        typePointer<Point2D> vertexB(new Point2D(vertexBX, vertexBY));;
       // vertexB = std::make_shared<Point2D>(vertexBX, vertexBY);

        print(" vertex C: " );
        vertexCX = getInput();
        vertexCY = getInput();
        typePointer<Point2D> vertexC(new Point2D(vertexCX, vertexCY));;
       // vertexC = std::make_shared<Point2D>(vertexCX, vertexCY);

       try{

           typePointer<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.buildTriangle(vertexA, vertexB, vertexC);

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
    auto end = std::chrono::system_clock::now();

    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "time : " << elapsed_seconds.count() << "\n";
    print("end");
    getchar();

    return 0;
}
