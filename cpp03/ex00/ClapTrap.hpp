#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class ClapTrap {
	private:
		str   name;
		unsigned int   max_hp;
		unsigned int   hp;
		unsigned int   energy;
		unsigned int   damage;

	public:
		ClapTrap();
		ClapTrap(str name);
		~ClapTrap();

		str  getName(void);
		void  setName(const str name);
		int  getHp(void);
		void  setHp(int hp);
		int  getEnergy(void);
		void  setEnergy(int energy);
		int  getDamage(void);
		void  setDamage(int damage);

		void attack(const str &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
