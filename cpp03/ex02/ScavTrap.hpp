#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

typedef std::string	str;

class ScavTrap : public ClapTrap {
	public:
		ScavTrap();
		ScavTrap(str name);
		~ScavTrap();
		void guardGate();
};

#endif
