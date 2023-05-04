#include "Dog.hpp"

// CONSTRUCTORS

Dog::Dog() : Animal() {
    setType("Dog");
    std::cout << getType() << " created!" << std::endl;
}

Dog::~Dog() {
    std::cout << getType() << " destroyed!" << std::endl;
}

// FUNCTIONS

void  Dog::makeSound(void) {
  std::cout <<  "Bark! Bark!" << std::endl;
}

