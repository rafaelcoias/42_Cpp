#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include <iostream>
#include "Weapon.hpp"

typedef std::string	str;

class HumanA {
	private:
		str name;
        Weapon *weapon;

	public:
		HumanA();
        HumanA(str name, Weapon &weapon);
		~HumanA();
        void    attack();
};

#endif