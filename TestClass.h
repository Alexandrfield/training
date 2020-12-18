#ifndef TESTCLASS_H_ 
#define TESTCLASS_H_ 

#include "stdfx.h"

class TestClass
{
    static int counter_object;
    int number_;
    
public:

    TestClass(int rhs);
    ~TestClass();
    int get() const;
    void set(int rhs);

};



#endif  // TESTCLASS_H_ 


