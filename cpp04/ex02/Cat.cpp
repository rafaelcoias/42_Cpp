#include "Cat.hpp"

// CONSTRUCTORS

Cat::Cat() : Animal() {
    setType("Cat");
    std::cout << getType() << " created!" << std::endl;
}

Cat::~Cat() {
    std::cout << getType() << " destroyed!" << std::endl;
}

// FUNCTIONS

void  Cat::makeSound(void) {
  std::cout <<  "Miaw" << std::endl;
}

