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

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->fpNumber = n * (1 << Fixed::raw);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->fpNumber = roundf(f * (1 << Fixed::raw));
}

Fixed	&Fixed::operator=(const Fixed &f)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fpNumber = f.fpNumber;
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
	this->fpNumber = f.fpNumber;
}

std::ostream &operator<<(std::ostream &o, const Fixed &f)
{
	o << f.toFloat();
	return (o);
}

float	Fixed::toFloat(void) const {
	return ((float)this->fpNumber / (1 << Fixed::raw));
}

int	Fixed::toInt(void) const {
	return (this->fpNumber >> Fixed::raw);
}