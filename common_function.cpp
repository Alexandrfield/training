#include "common_function.h"

void print(const std::string& str)
{
    std::cout << str << std::endl;
}
int getInput()
{
    int a;
    //std::cin >> a;
   // return a;
    return (int)(rand() % 1000);
}
