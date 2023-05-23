#include "ScavTrap.hpp"

// CONSTRUCTORS

ScavTrap::ScavTrap() : ClapTrap() {
	setName("NULL");
	setType("ScavTrap");
	setHp(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "SlapTrap with no name created!" << std::endl;

}

ScavTrap::ScavTrap(str name) : ClapTrap(name) {
	setType("ScavTrap");
	setName(name);
	setHp(100);
	setEnergy(50);
	setDamage(20);
	std::cout << "SlapTrap " << getName() << " created!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
	setType("ScavTrap");
	std::cout << "ScavTrap " << getName() << " created with copy constructor!" << std::endl; 
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	ClapTrap::operator=(copy);
	std::cout << "ScavTrap created with assignment operator!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "SlapTrap " << getName() << " destroyed!" << std::endl;
}

// FUNCTIONS

void ScavTrap::guardGate() { 
	std::cout << "SlapTrap " << getName() << "  is now in Gate keeper mode!" << std::endl;
}


