#include "FragTrap.hpp"

// CONSTRUCTORS

FragTrap::FragTrap() : ClapTrap() {
    setName("NULL");
	setType("FragTrap");
	setHp(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap with no name created!" << std::endl;
}

FragTrap::FragTrap(str name) : ClapTrap(name) {
	setName(name);
    setType("FragTrap");
	setHp(100);
	setEnergy(100);
	setDamage(30);
	std::cout << "FragTrap " << getName() << " created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	setType("FragTrap");
	std::cout << "FragTrap " << getName() << " copy constructor called" << std::endl; 
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	ClapTrap::operator=(copy);
	std::cout << "FragTrap assignment operator called" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {}

// SET & GET FUNCTIONS


// FUNCTIONS

void    FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << getName() << " has requested a high five!" << std::endl;
}

