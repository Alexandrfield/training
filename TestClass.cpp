#include "TestClass.h"


int TestClass::counter_object = 0;
TestClass::TestClass(int rhs): number_(rhs)
{
    counter_object++;
    print( "create. count objects = " + std::to_string( counter_object));
}

TestClass::TestClass(const TestClass& rhs) 
{
    number_ = rhs.number_;
    counter_object++;
    print("create(copy). count objects = " + std::to_string(counter_object));
}

TestClass::~TestClass()
{
    counter_object--;
    print("delete. count objects = " + std::to_string(counter_object));
}

int TestClass::get() const
{
    return number_;
}

void TestClass::set(int rhs)
{
    number_ = rhs;
}

bool TestClass::operator == (const TestClass& rhs) const
{
    return number_ == rhs.number_;
}
bool TestClass::operator != (const TestClass & rhs) const
{
    return number_ != rhs.number_;
}