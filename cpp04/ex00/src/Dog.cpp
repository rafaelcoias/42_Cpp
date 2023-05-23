#include "Dog.hpp"

// CONSTRUCTORS

Dog::Dog() : Animal() {
    setType("Dog");
    std::cout << getType() << " created!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
	*this = copy;
}

Dog &Dog::operator=(const Dog &copy)
{
	setType(copy.getType());
	return (*this);
}

Dog::~Dog() {
    std::cout << getType() << " destroyed!" << std::endl;
}

// FUNCTIONS

void  Dog::makeSound(void) const {
  std::cout <<  "Bark! Bark!" << std::endl;
}

