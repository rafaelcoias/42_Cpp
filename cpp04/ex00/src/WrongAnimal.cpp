#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
	*this = copy;
	std::cout << "Copy WrongAnimal constructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &copy)
{
	this->type = copy.type;
	std::cout << "Copy assignment operator WrongAnimal called" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called " << std::endl;
}

void	WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	WrongAnimal::getType(void)const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Wrong Animal here" << std::endl;
}
