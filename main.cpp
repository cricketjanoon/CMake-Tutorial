#include <iostream>
#include "TestClass.hpp"

int main(int argc, char** argv)
{
    std::cout << "Hello World!" << std::endl;

    cmake_tutorial::TestClass testClass;
    testClass.DoSomething();

    return 0;
}