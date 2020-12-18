#include "CheckingCorrect.h"
#include "MySmartPointer.h"
#include "TestClass.h"

bool testFunctionArgCopyConstructor(const MySmartPointer<TestClass> ptr, int correct_numb,std::string& message)
{
    print( "test  MySmartPointer<TestClass> ptr : " + std::to_string( ptr->get()));
    if (ptr->get() == correct_numb) {
        message = (std::string)"testFunctionArgCopyConstructor(const MySmartPointer<TestClass> ptr) : OK \n";
        return true;
    } else {
        message = (std::string)"testFunctionArgCopyConstructor(const MySmartPointer<TestClass> ptr) : problem \n";
        return false;
    }
}
bool testFunctionArgReference(const MySmartPointer<TestClass>& ptr, int correct_numb, std::string& message)
{
    print("test  MySmartPointer<TestClass> ptr : " + std::to_string(ptr->get()));
    if (ptr->get() == correct_numb) {
        message = (std::string)"testFunctionArgReference(const MySmartPointer<TestClass>& ptr) : OK \n";
        return true;
    }
    else {
        message = (std::string)"testFunctionArgReference(const MySmartPointer<TestClass>& ptr) : problem \n";
        return false;
    }
}
bool testFunctionArgObjectReference(const TestClass& ptr, int correct_numb, std::string& message)
{
    print("test function TestClass& ptr :" + std::to_string(ptr.get()));
    print("test  MySmartPointer<TestClass> ptr : " + std::to_string(ptr.get()));
    if (ptr.get() == correct_numb) {
        message = (std::string)"testFunctionArgObjectReference(const TestClass& ptr) : OK \n";
        return true;
    }
    else {
        message = (std::string)"testFunctionArgObjectReference(const TestClass& ptr) : problem \n";
        return false;
    }
}
//bool testFunctionArgPointerObject(TestClass* ptr)
//{
//    print(std::to_string((*ptr).get()));
//    return true;
//}


 std::string CheckingCorrect::check(int test_numb)
{
    int difNumb = 2;

    std::string testRezalt;

    MySmartPointer<TestClass> ptr_1(new TestClass(test_numb));

    print(std::to_string(ptr_1->get()));
    print(std::to_string((*ptr_1).get()));

    if (ptr_1->get() == test_numb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    if ((*ptr_1).get() == test_numb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    MySmartPointer<TestClass> ptr_2;

    if (!ptr_2) {
        testRezalt += "test: bool() OK \n";
    } else {
        testRezalt += "test: bool() Problem \n";
    }

    ptr_2 = ptr_1;

    if (ptr_2) {
        testRezalt += "test: bool() OK \n";
    } else {
        testRezalt += "test: bool() Problem \n";
    }

    print(std::to_string(ptr_2->get()));
    print(std::to_string((*ptr_2).get()));

    if (ptr_2->get() == test_numb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    if ((*ptr_2).get() == test_numb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    ptr_2->set(ptr_2->get() * difNumb);

    print(std::to_string(ptr_1->get()));
    print(std::to_string((*ptr_1).get()));

    if (ptr_1->get() == test_numb * difNumb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    if ((*ptr_1).get() == test_numb * difNumb) {
        testRezalt += "test: -> OK \n";
    } else {
        testRezalt += "test: -> Problem \n";
    }

    MySmartPointer<TestClass> ptr_3(new TestClass(test_numb + difNumb));

    ptr_1 = ptr_3;
    ptr_2 = ptr_3;

    std::string str_temp;
    testFunctionArgCopyConstructor(ptr_3, test_numb + difNumb, str_temp);
    testRezalt += str_temp;
    testFunctionArgReference(ptr_3, test_numb + difNumb, str_temp);
    testRezalt += str_temp;
    testFunctionArgObjectReference(*ptr_3, test_numb + difNumb, str_temp);
    testRezalt += str_temp;
    
    return testRezalt;
}
