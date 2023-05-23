#include "Harl.hpp"

Harl::Harl() {
    complains[0].complain = "DEBUG";
    complains[0].level = &Harl::debug;
    complains[1].complain = "INFO";
    complains[1].level = &Harl::info;
    complains[2].complain = "WARNING";
    complains[2].level = &Harl::warning;
    complains[3].complain = "ERROR";
    complains[3].level = &Harl::error;
}

Harl::~Harl() {}

void    Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void    Harl::complain(std::string level) {
    for (int i = 0; i != 4; i++) {
        if (level == complains[i].complain)
            (this->*complains[i].level)();
    }
}