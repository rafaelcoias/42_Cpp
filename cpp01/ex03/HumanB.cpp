#include "HumanB.hpp"

HumanB::HumanB(void) {}

HumanB::HumanB(str name) {
    this->name = name;
}

HumanB::~HumanB(void) {}

void HumanB::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}