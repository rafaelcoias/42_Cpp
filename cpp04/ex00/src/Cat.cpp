#include "Cat.hpp"

// CONSTRUCTORS

Cat::Cat() : Animal() {
    setType("Cat");
    std::cout << getType() << " created!" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy)
{
	*this = copy;
}

Cat &Cat::operator=(const Cat &copy)
{
	setType(copy.getType());
	return (*this);
}

Cat::~Cat() {
    std::cout << getType() << " destroyed!" << std::endl;
}

// FUNCTIONS

void  Cat::makeSound(void) const {
  std::cout << "Miaw" << std::endl;
}

