#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "NULL";
	this->type = "ClapTrap";
	this->max_hp = 10;
	this->hp = 10;
	this->energy = 10;
	this->damage = 1;
	std::cout << getType() << " with no name created!" << std::endl;
}

ClapTrap::ClapTrap(const str name) {
	this->name = name;
	this->type = "ClapTrap";
	this->max_hp = 10;
	this->hp = 10;
	this->energy = 10;
	this->damage = 1;
	std::cout << getType() << " " << this->name << " created!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->max_hp = copy.max_hp;
	this->energy= copy.energy;
	this->damage = copy.damage;
	std::cout << "ClapTrap: copy constructor called!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	this->name = copy.name;
	this->hp = copy.hp;
	this->max_hp = copy.max_hp;
	this->energy= copy.energy;
	this->damage = copy.damage;
	std::cout << "ClapTrap: Assignment operator called!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << getType() << " " << this->name << " destroyed!" << std::endl;
}

// GET & SET FUNCTIONS

str ClapTrap::getName(void) {
	return (this->name);
}

void ClapTrap::setName(str name) {
	this->name = name;
}

str ClapTrap::getType(void) {
	return (this->type);
}

void ClapTrap::setType(str type) {
	this->type = type;
}

int ClapTrap::getHp(void) {
	return (this->hp);
}

void ClapTrap::setHp(int hp) {
	this->hp = hp;
}

int ClapTrap::getEnergy(void) {
	return (this->energy);
}

void ClapTrap::setEnergy(int energy) {
	this->energy = energy;
}

int ClapTrap::getDamage(void) {
	return (this->damage);
}

void ClapTrap::setDamage(int damage) {
	this->damage = damage;
}

// FUNCTIONS

void ClapTrap::attack(const str &target) {
	if (getHp() <= 0) {
		std::cout << getType() << " " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergy() <= 0) {
		std::cout << getType() << " " << getName() << " has no energy left!" << std::endl;
		return ;
	}
	std::cout << getType() << " " << getName() << " attacks " << target << " causing " << getDamage() <<  " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (getHp() <= 0) {
		std::cout << getType() << " " << getName() << " is dead!" << std::endl;
		return ;
	}
	setHp(getHp() - amount);
	std::cout << getType() << " " << getName() << " took " << amount << " points of damage!" << std::endl;
	if (getHp() <= 0) {
		std::cout << getType() << " " << getName() << " died!" << std::endl;
		setHp(0);
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getHp() <= 0) {
		std::cout << getType() << " " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergy() <= 0) {
		std::cout << getType() << " " << getName() << " has no energy left!" << std::endl;
		return ;
	}
	setHp(getHp() + amount);
	setEnergy(getEnergy() - 1);
	if (getHp() > this->max_hp)
		setHp(this->max_hp);
	std::cout << getType() << " " << getName() << " repaired " << amount << " points!" << std::endl;
}
