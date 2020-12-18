#include "TestClass.h"


int TestClass::counter_object = 0;
TestClass::TestClass(int rhs): number_(rhs)
{
    counter_object++;
    std::cout << "create. number of objects = " << counter_object << std::endl;
}

TestClass::~TestClass()
{
    counter_object--;
    std::cout << "delete. number of objects = " << counter_object << std::endl;
}

int TestClass::get() const
{
    return number_;
}

void TestClass::set(int rhs)
{
    number_ = rhs;
}
