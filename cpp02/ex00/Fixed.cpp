#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->fpNumber = 0;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->copyFixed(f);
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpNumber = f.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fpNumber);
}

void	Fixed::setRawBits(const int raw)
{
	this->fpNumber = raw;
}

void	Fixed::copyFixed(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpNumber = f.getRawBits();
}