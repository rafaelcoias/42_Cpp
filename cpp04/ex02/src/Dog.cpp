#include "Dog.hpp"

// CONSTRUCTORS

Dog::Dog() : Animal() {
    setType("Dog");
    this->brain = new Brain();
    std::cout << getType() << " created!" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy)
{
  this->brain = new Brain();
	*this = copy;
	std::cout << "Copy Dog constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
  this->brain = new Brain();
	setType(copy.getType());
  std::cout << "Copy assignment operator Dog called" << std::endl;
	return (*this);
}

Dog::~Dog() {
    delete (this->brain);
    std::cout << getType() << " destroyed!" << std::endl;
}

// FUNCTIONS

void  Dog::makeSound(void) const {
  std::cout <<  "Bark! Bark!" << std::endl;
}

