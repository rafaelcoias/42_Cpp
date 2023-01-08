#include "Weapon.hpp"

Weapon::Weapon(void) {}

Weapon::Weapon(str type) {
    this->type = type;
}

Weapon::~Weapon(void) {}

str Weapon::getType(void) {
    return this->type;
}

void Weapon::setType(str type) {
    this->type = type;
}