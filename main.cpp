
#include "stdfx.h"
#include "AbstractTriangle.h"
#include "Point2D.h"
#include "TriangleBilder.h"


int main(){

    int counter_experiment = 0;

    int vertexAX = 0, vertexAY = 0;
    int vertexBX = 0, vertexBY = 0;
    int vertexCX = 0, vertexCY = 0;

    std::cout << " enter count experiment" << std::endl;
    std::cin >> counter_experiment;

    TriangleBilder bilderObjectTriangle;

    for(int index = 0; index < counter_experiment; index++){

        std::cout << " vertex A: " << std::endl;
        std::cin >> vertexAX >> vertexAY;
        //Point2D vertexA(vertexAX, vertexAY);
        std::unique_ptr<Point2D> vertexA;
        vertexA = std::make_unique<Point2D>(vertexAX, vertexAY);
        //Point2D* vertexA = new Point2D(vertexAX, vertexAY);

        std::cout << std::endl << " vertex B: " << std::endl;
        std::cin >> vertexBX >> vertexBY;
        //Point2D vertexB(vertexBX, vertexBY);
        std::unique_ptr<Point2D> vertexB;
        vertexA = std::make_unique<Point2D>(vertexBX, vertexBY);
 //Point2D* vertexB = new Point2D(vertexBX, vertexBY);

        std::cout << std::endl << " vertex C: " << std::endl;
        std::cin >> vertexCX >> vertexCY;
        //Point2D vertexC(vertexCX, vertexCY);
        std::unique_ptr<Point2D> vertexC;
        vertexA = std::make_unique<Point2D>(vertexCX, vertexCY);
 //Point2D* vertexC = new Point2D(vertexCX, vertexCY);
 //       std::cout << std::endl;

       try{

          //std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.BildTriangle(*vertexA, *vertexB, *vertexC);
          std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.BildTriangle(*vertexA.get(), *vertexB.get(), *vertexC.get());
          //std::unique_ptr<AbstractTriangle> pointerToTriagle = bilderObjectTriangle.BildTriangle(vertexA, vertexB, vertexC);

          if( pointerToTriagle ) {

              TriangleTipe typeTrianfle = pointerToTriagle->GetType();

              switch (typeTrianfle){
	             case TRINAGLE_TIPE_EQUILATERAL:
		                std::cout << "TRINAGLE_TIPE_EQUILATERAL "<<std::endl;
		                break;
	             case TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED:
	                	std::cout << "TRINAGLE_TIPE_ISOSCELES_RIGHT_ANGLED"<<std::endl;
		                break;
              case TRINAGLE_TIPE_ISOSCELES:
	                	std::cout << "TRINAGLE_TIPE_ISOSCELES"<<std::endl;
		                break;
	            case TRINAGLE_TIPE_RIGHT_ANGLED:
		                std::cout << "TRINAGLE_TIPE_RIGHT_ANGLED"<<std::endl;
		                break;
	            case TRINAGLE_TIPE_ARBITRARY:
		               std::cout << "TRINAGLE_TIPE_ARBITRARY"<<std::endl;
		               break;
	            default:
		               std::cout << "Unknown type"<<std::endl;
	              	 break;
	            }

          } else {

              std::cout << "ERROR! triangle is can't created" << std::endl;
          }

        }
        catch(std::exception &exept){

        std::cout << "EXEPTION: "<<exept.what()<< std::endl;
        }
    }


    std::cout << " end" << std::endl;
    getchar();

    return 0;
}