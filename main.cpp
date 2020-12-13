
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
        //Point2D vertexA(vertexAX, vertexAY);
        std::shared_ptr<Point2D> vertexA;
        vertexA = std::make_shared<Point2D>(vertexAX, vertexAY);
        //Point2D* vertexA = new Point2D(vertexAX, vertexAY);

        print(" vertex B: " );
        vertexBX = getInput();
        vertexBY = getInput();
        //Point2D vertexB(vertexBX, vertexBY);
        std::shared_ptr<Point2D> vertexB;
        vertexB = std::make_shared<Point2D>(vertexBX, vertexBY);
 //Point2D* vertexB = new Point2D(vertexBX, vertexBY);

        print(" vertex C: " );
        vertexCX = getInput();
        vertexCY = getInput();
        //Point2D vertexC(vertexCX, vertexCY);
        std::shared_ptr<Point2D> vertexC;
        vertexC = std::make_shared<Point2D>(vertexCX, vertexCY);
 //Point2D* vertexC = new Point2D(vertexCX, vertexCY);
 //       std::cout << std::endl;

       try{

          //std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.BildTriangle(*vertexA, *vertexB, *vertexC);
          std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.buildTriangle(vertexA, vertexB, vertexC);
          //std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.BildTriangle(vertexA, vertexB, vertexC);

          if( pointerToTriagle ) {

              TriangleTipe typeTrianfle = pointerToTriagle->GetType();

              switch (typeTrianfle){
	             case TRINAGLE_TIPE_EQUILATERAL:
                        print("TRINAGLE_TIPE_EQUILATERAL ");
		                break;
	             case TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED:
                        print("TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED");
		                break;
              case TRINAGLE_TIPE_ISOSCELES:
                        print("TRINAGLE_TIPE_ISOSCELES");
		                break;
	            case TRINAGLE_TIPE_RIGHT_ANGLED:
                        print("TRINAGLE_TIPE_RIGHT_ANGLED");
		                break;
	            case TRINAGLE_TIPE_ARBITRARY:
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