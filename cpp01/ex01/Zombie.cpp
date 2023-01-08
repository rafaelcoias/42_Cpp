#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::Zombie(str name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << this->name << ":" << RED << " died" << RESET << std::endl;
}

void    Zombie::setName(str name) {
    this->name = name;
}

void    Zombie::announce(void) {
    std::cout << this->name << ":" << GREEN << " BraiiiiiiinnnzzzZ..." << RESET << std::endl;
}