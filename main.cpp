#include "stdfx.h"
#include "MySmartPointer.h"
#include "CheckingCorrect.h"
#include "TestClass.h"

int main()
{
    constexpr int test_numb = 4;

    std::string strResultPointer = CheckingCorrect::check(4);
    print("rezalt" + strResultPointer);

    std::string strResultList;
    bool resultTest= CheckingCorrect::checkList(10, strResultList);
    print("rezalt" + strResultList);
    print("END");
    return 0;
}
