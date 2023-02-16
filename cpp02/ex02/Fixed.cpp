#include "Fixed.hpp"

// CONSTRUCTORS

Fixed::Fixed()
{
	this->fpNumber = 0;
}

Fixed::Fixed(const Fixed &f)
{
	this->copyFixed(f);
}

Fixed::Fixed(const int n)
{
	this->fpNumber = n * (1 << Fixed::raw);
}

Fixed::Fixed(const float f)
{
	this->fpNumber = roundf(f * (1 << Fixed::raw));
}

Fixed::~Fixed()
{
}

// FUNCTIONS

int	Fixed::getRawBits(void)const
{
	return (this->fpNumber);
}

void	Fixed::setRawBits(const int raw)
{
	this->fpNumber = raw;
}

void	Fixed::copyFixed(const Fixed &f)
{
	this->fpNumber = f.fpNumber;
}


float	Fixed::toFloat(void) const {
	return ((float)this->fpNumber / (1 << Fixed::raw));
}

int	Fixed::toInt(void) const {
	return (this->fpNumber >> Fixed::raw);
}

std::ostream &operator<<(std::ostream &o, const Fixed &f){
	o << f.toFloat();
	return (o);
}

// ARITHMETIC OPERANDS

Fixed &Fixed::operator=(const Fixed &f){
	this->fpNumber = f.fpNumber;
	return (*this);
} 
bool Fixed::operator<(const Fixed &f){
	return (this->fpNumber < f.getRawBits());
} 
bool Fixed::operator>(const Fixed &f){
	return (this->fpNumber > f.getRawBits());
}
bool Fixed::operator>=(const Fixed &f){
	return (this->fpNumber >= f.getRawBits());
}
bool Fixed::operator<=(const Fixed &f){
	return (this->fpNumber <= f.getRawBits());
}
bool Fixed::operator==(const Fixed &f){
	return (this->fpNumber == f.getRawBits());
}
bool Fixed::operator!=(const Fixed &f){
	return (this->fpNumber != f.getRawBits());
}

// COMPARISON OPERANDS

Fixed Fixed::operator+(const Fixed &f){
	return(Fixed(this->toFloat() + f.toFloat()));
}
Fixed Fixed::operator-(const Fixed &f){
	return(Fixed(this->toFloat() - f.toFloat()));
}
Fixed Fixed::operator*(const Fixed &f){
	return(Fixed(this->toFloat() * f.toFloat()));
}
Fixed Fixed::operator/(const Fixed &f){
	return(Fixed(this->toFloat() / f.toFloat()));
}

// INCREASE AND DECREASE

Fixed 	Fixed::operator++(int) {
	Fixed aux(this->fpNumber * toFloat());
	this->fpNumber++;
	return (aux);
}
Fixed	&Fixed::operator++(void) {
	this->fpNumber++;
	return (*this);
}
Fixed	Fixed::operator--(int) {
	Fixed aux(this->fpNumber * toFloat());
	this->fpNumber--;
	return (aux);
}
Fixed	&Fixed::operator--(void) {
	this->fpNumber--;
	return (*this);
}

// MIN & MAX

Fixed Fixed::min(Fixed &f1, Fixed &f2) {
	if (f1 < f2)
		return (f1);
	return (f2);
}

Fixed Fixed::min(const Fixed &f1, const Fixed &f2) {
	if ((Fixed &)f1 < (Fixed &)f2)
		return (f1);
	return (f2);
}

Fixed Fixed::max(Fixed &f1, Fixed &f2) {
	if (f1 > f2)
		return (f1);
	return (f2);
}

Fixed Fixed::max(const Fixed &f1, const Fixed &f2) {
	if ((Fixed &)f1 > (Fixed &)f2)
		return (f1);
	return (f2);
}