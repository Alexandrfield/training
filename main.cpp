#include "stdfx.h"
#include "MySmartPointer.h"
#include "CheckingCorrect.h"
#include "TestClass.h"

int main()
{
    constexpr int test_numb = 4;

    std::string strRezaltPointer = CheckingCorrect::check(4);
    std::cout << "rezalt" << std::endl << strRezaltPointer << std::endl;

    std::string strRezaltList = CheckingCorrect::checkList(10);
    std::cout << "rezalt" << std::endl << strRezaltList << std::endl;

    std::cout << "END" << std::endl << std::endl;
    return 0;
}
