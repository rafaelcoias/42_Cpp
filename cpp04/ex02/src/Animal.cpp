#include "Animal.hpp"

// CONSTRUCTORS

Animal::Animal(void) {
  this->type = "Animal";
  std::cout << getType() << " created!" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	*this = copy;
	std::cout << "Copy animal constructor called" << std::endl;
}

Animal	&Animal::operator=(const Animal &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator animal called" << std::endl;
	return (*this);
}

Animal::~Animal(void) {
  std::cout << getType() << " destroyed!" << std::endl;
}

// SET & GET FUNCTIONS

str Animal::getType(void) const {
  return (this->type);
}

void Animal::setType(str type) {
  this->type = type;
}


// FUNCTIONS

void  Animal::makeSound(void) const {

}

