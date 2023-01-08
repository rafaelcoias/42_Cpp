#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

typedef std::string	str;

class HumanB {
	private:
		str name;
        Weapon *weapon;

	public:
		HumanB();
        HumanB(str name);
		~HumanB();
        void    attack();
        void    setWeapon(Weapon &weapon);
};

#endif