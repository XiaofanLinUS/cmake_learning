

#include "student.hpp"
#include <iostream>

student::student(std::string name) : name(name) {}

void student::display() {
  std::cout << "A student with name " << this->name << std::endl;
  
}
