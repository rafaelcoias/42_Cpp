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
}

Cat &Cat::operator=(const Cat &copy)
{
  this->brain = new Brain();
	setType(copy.getType());
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

