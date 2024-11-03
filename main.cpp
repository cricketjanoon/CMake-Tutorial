#include <iostream>
#include "Project.hpp"
// #include <Input.hpp>

int main(int argc, char** argv)
{
    std::cout << "Main: Hello World from main program!" << std::endl;

    cmake_tutorial::Project project;
    project.DoSomething();

    return 0;
}