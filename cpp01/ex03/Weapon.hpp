#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <string>

typedef std::string	str;

class Weapon {
	private:
		str type;

	public:
		Weapon();
        Weapon(str type);
		~Weapon();
		str     getType(void);
        void    setType(str type);
};

#endif