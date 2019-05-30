//============================================================================
// Name        : ImplicitExplicitExample.cpp
// Author      : DRS
// Version     :
// Copyright   : Free to the World
// Description : Demonstrate the implicit conversion and the use of the
//               explicit keyword to manage it.
//
//============================================================================
#include <iostream>
#include <vector>

class Entity {
private:
  std::string m_Name;
  int m_Age;
public:
  Entity(const std::string& name)
    : m_Name(name), m_Age(0) {}
  Entity(int age)
    : m_Name("Unknown"), m_Age(age) {}
};


int main(int argc, const char * argv[]) {
    std::cout << "Implicit Convestion and Explicit Keyword Demonstration Started" << "\n\n";

    // Typical constructor usage
    Entity a0("Snyder");
    Entity b0(60);

    Entity a1 = Entity("Snyder2");
    Entity b1 = Entity(61);

    // Implicit conversion with constructor
    Entity a2 = "Snyder3";
    Entity b2 = 62;


    std::cout << "\nImplicit Convestion and Explicit Keyword Demonstration Completed" << "\n\n";

    return 0;
}
