#include "CheckingCorrect.h"
#include "MySmartPointer.h"
#include "TestClass.h"
#include "MyList.h"

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



 bool testMyListPushBack(MyList<TestClass>& testList, std::vector<TestClass>& vect,std::string rezalt)
 {
     std::cout << "start push back " << vect.size() << std::endl;
     for (size_t i = 0; i < vect.size(); i++) {
         testList.pushBack(vect[i]);
     }
     std::cout << "end push back " << vect.size() << std::endl;

     bool flagCorrect1 = true;
     for (size_t i = 0; i < vect.size(); i++) {
         if (testList.at(static_cast<int>(i)) != vect[i]) {
             print("pushBack problem i=" + std::to_string(i));
             flagCorrect1 = false;
         }
     }
     if (flagCorrect1 == false) {
         rezalt += std::string("test (pushBack) problem\n");
     }
     else {
         rezalt += std::string("test (pushBack) OK\n");
     }

     bool flagCorrect2 = true;
     for (size_t i = 0; i < vect.size(); i++) {
         testList.emplaceBack();
     }
     if (testList.getSize() != 0) {
         rezalt += std::string("test (emplaceBack) problem\n");
         flagCorrect2 = false;
     }
     else {
         rezalt += std::string("test (emplaceBack) OK\n");
     }

     return flagCorrect2 && flagCorrect1;
 }

 bool testMyListPushFront(MyList< TestClass>& testList, std::vector< TestClass>& vect, std::string rezalt)
 {
     for (int i = static_cast<int>(vect.size() - 1); i >= 0; i--) {
         testList.pushFront(vect[i]);
     }
     bool flagCorrect1 = true;
     for (size_t i = 0; i < vect.size(); i++) {
         if (testList.at(i) != vect[i]) {
             print(" emplaceBack problem i=" + std::to_string(i));
             flagCorrect1 = false;
         }
     }
     if (flagCorrect1 == false) {
         rezalt += std::string("test (pushHead) problem\n");
     }
     else {
         rezalt += std::string("test (pushHead) OK\n");
     }

     bool flagCorrect2 = true;
     for (size_t i = 0; i < vect.size(); i++) {
         testList.emplaceFront();
     }
     if (testList.getSize() != 0) {
         rezalt += std::string("test (emplaceFront) problem\n");
         flagCorrect2 = false;
     }
     else {
         rezalt += std::string("test (emplaceFront) OK\n");
     }

     return flagCorrect2 && flagCorrect1;
 }

 bool testMyListInsert(MyList< TestClass>& testList, std::vector< TestClass>& vect, std::string rezalt)
 {
     int test_insert = rand() % vect.size();
     vect.insert(vect.begin() + test_insert, TestClass(rand() % 100));
     testList.insert(vect[test_insert], test_insert);
     bool flagCorrect = true;
     for (int i = 0; i < vect.size(); i++) {
         if (testList.at(i) != vect[i]) {
             print(" insert problem i=" + std::to_string(i));
             flagCorrect = false;
         }
     }
     if (flagCorrect == false) {
         rezalt += std::string("test (insert) problem\n");
     }
     else {
         rezalt += std::string("test (insert) OK\n");
     }

     return flagCorrect;
 }

 std::string CheckingCorrect::checkList(int size)
 {
     srand(static_cast<unsigned int>(time(0)));
     
     std::string testRezalt;

     std::vector<TestClass> vect;
     for(int i = 0; i < size; i++) {
         vect.push_back(TestClass(rand() % 100));
     }

     MyList< TestClass> testList;

     testMyListPushBack(testList, vect, testRezalt);
     std::cout << std::endl;
     testMyListPushFront(testList, vect, testRezalt);
     std::cout << std::endl;
     testMyListInsert(testList, vect, testRezalt);

     return testRezalt;
 }
