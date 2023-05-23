#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	this->name = "NULL";
	this->max_hp = 10;
	this->hp = 10;
	this->energy = 10;
	this->damage = 1;
	std::cout << "ClapTrap with no name created!" << std::endl;
}

ClapTrap::ClapTrap(const str name) {
	this->name = name;
	this->max_hp = 10;
	this->hp = 10;
	this->energy = 10;
	this->damage = 1;
	std::cout << "ClapTrap " << this->name << " created!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->name << " destroyed!" << std::endl;
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

// GET & SET FUNCTIONS

str ClapTrap::getName(void) {
	return (this->name);
}

void ClapTrap::setName(str name) {
	this->name = name;
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
		std::cout << "ClapTrap " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergy() <= 0) {
		std::cout << "ClapTrap " << getName() << " has no energy left!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << getName() << " attacks " << target << " causing " << getDamage() <<  " points of damage!" << std::endl;
	setEnergy(getEnergy() - 1);
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->hp <= 0) {
		return ;
	}
	setHp(getHp() - amount);
	std::cout << "ClapTrap " << getName() << " took " << amount << " points of damage!" << std::endl;
	if (getHp() <= 0) {
		std::cout << "ClapTrap " << getName() << " died!" << std::endl;
		return ;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (getHp() <= 0) {
		std::cout << "ClapTrap " << getName() << " is dead!" << std::endl;
		return ;
	}
	if (getEnergy() <= 0) {
		std::cout << "ClapTrap " << getName() << " has no energy left!" << std::endl;
		return ;
	}
	setHp(getHp() + amount);
	setEnergy(getEnergy() - 1);
	std::cout << "ClapTrap " << getName() << " repaired " << amount << " points!" << std::endl;
}
