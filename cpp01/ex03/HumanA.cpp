#include "HumanA.hpp"

HumanA::HumanA(void) {}

HumanA::HumanA(str name, Weapon &weapon) {
    this->weapon = &weapon;
    this->name = name;
}

HumanA::~HumanA(void) {}

void HumanA::attack() {
    std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}