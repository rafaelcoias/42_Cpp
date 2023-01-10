#include "Fixed.hpp"

Fixed::Fixed(void) {
    this->fpNumber = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed &f ) {
    std::cout << "Copy constructor called" << std::endl;
    copyFixed(f);
}

Fixed::~Fixed(void) {
    std::cout << "Destructor called" << std::endl;
}

int     Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return this->raw;
}

void    Fixed::setRawBits( const int raw ) {
    this->raw = raw;
}

void    Fixed::copyFixed(Fixed &f) {
    this->fpNumber = f.fpNumber;
    setRawBits(f.getRawBits());
    std::cout << "Copy assignment operator called" << std::endl;
}

