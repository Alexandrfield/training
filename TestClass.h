#ifndef TESTCLASS_H_ 
#define TESTCLASS_H_ 

#include "stdfx.h"
#include "common_function.h"
class TestClass
{
    static int counter_object;
    int number_;
    
public:

    TestClass(int rhs);
    TestClass(const TestClass& rhs);
    ~TestClass();
    int get() const;
    void set(int rhs);

    bool operator == (const TestClass& rhs) const;
    bool operator != (const TestClass& rhs) const;
};



#endif  // TESTCLASS_H_ 


