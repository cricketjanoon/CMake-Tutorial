#include <Input.hpp>
#include <Math.hpp>
#include <Project.hpp>
#include <iostream>

namespace cmake_tutorial {
void cmake_tutorial::Project::DoSomething() {
  // using lib1 (subproject1)
  subspace1::Math::CalculateSquare(2);

  // using lib2 (subproject2), which used lib3 subproject3
  std::string answer = subspace2::Input::prompt("What is your purpose?");

  std::cout << "Project: " << answer << std::endl;
}
}  // namespace cmake_tutorial
