#include "stdfx.h"
#include "MySmartPointer.h"
#include "CheckingCorrect.h"
#include "TestClass.h"

int main()
{
    constexpr int test_numb = 4;

    std::string strRezalt = CheckingCorrect::check(4);

    std::cout << "END" << std::endl<<std::endl;
    std::cout << "rezalt" << std::endl << strRezalt << std::endl;

    return 0;
}
