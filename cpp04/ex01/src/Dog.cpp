#include "Dog.hpp"

// CONSTRUCTORS

Dog::Dog() : Animal() {
    setType("Dog");
    this->brain = new Brain();
    std::cout << getType() << " created!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
  this->type = copy.type;
  this->brain = new Brain();
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
  this->brain = new Brain();
	setType(copy.getType());
	return (*this);
}

Dog::~Dog() {
    std::cout << getType() << " destroyed!" << std::endl;
    delete (this->brain);
}

// FUNCTIONS

void  Dog::makeSound(void) const {
  std::cout <<  "Bark! Bark!" << std::endl;
}

