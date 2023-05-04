#include "Animal.hpp"

// CONSTRUCTORS

Animal::Animal() {
  this->type = "Animal";
  this->brain = new Brain();
  std::cout << getType() << " created!" << std::endl;
}

Animal::~Animal() {
  delete this->brain;
  std::cout << getType() << " destroyed!" << std::endl;
}

// SET & GET FUNCTIONS

str Animal::getType(void) {
  return (this->type);
}

void Animal::setType(str type) {
  this->type = type;
}


// FUNCTIONS

void  Animal::makeSound(void) {

}

