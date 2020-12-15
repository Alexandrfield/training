
#include "stdfx.h"
#include "AbstractTriangle.h"
#include "Point2D.h"
#include "TriangleBuilder.h"
#include "common_function.h"


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

              switch (typeTrianfle){
	             case TRINAGLE_TYPE_EQUILATERAL:
                        print("TRINAGLE_TIPE_EQUILATERAL ");
		                break;
	             case TRINAGLE_TYPE_ISOSCELES_RIGHT_ANGLED:
                        print("TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED");
		                break;
              case TRINAGLE_TYPE_ISOSCELES:
                        print("TRINAGLE_TIPE_ISOSCELES");
		                break;
	            case TRINAGLE_TYPE_RIGHT_ANGLED:
                        print("TRINAGLE_TIPE_RIGHT_ANGLED");
		                break;
	            case TRINAGLE_TYPE_ARBITRARY:
                       print("TRINAGLE_TIPE_ARBITRARY");
		               break;
	            default:
                       print("Unknown type");
	              	 break;
	            }

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