#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

/* COLORS */

# define RED	"\033[0;31m"
# define GREEN	"\033[1;32m"
# define RESET	"\033[0m"

typedef std::string	str;

class Zombie {
	private:
		str name;

	public:
		Zombie();
        Zombie(str name);
		~Zombie();
		void	announce(void);
};

Zombie* newZombie( std::string name );

void    randomChump( std::string name );

#endif