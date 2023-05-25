#include "Cat.hpp"

// CONSTRUCTORS

Cat::Cat() : Animal() {
    setType("Cat");
    this->brain = new Brain();
    std::cout << getType() << " created!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
  this->brain = new Brain();
	*this = copy;
	std::cout << "Copy Cat constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
  this->brain = new Brain();
	setType(copy.getType());
  std::cout << "Copy assignment operator Cat called" << std::endl;
	return (*this);
}

Cat::~Cat() {
    std::cout << getType() << " destroyed!" << std::endl;
    delete (this->brain);
}

// FUNCTIONS

void  Cat::makeSound(void) const {
  std::cout << "Miaw" << std::endl;
}

