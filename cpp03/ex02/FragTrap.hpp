#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <string>
# include <iostream>
# include "ClapTrap.hpp"

typedef std::string	str;

class FragTrap : public ClapTrap {
  private:

  public:
      FragTrap();
      FragTrap(str name);
      FragTrap(const FragTrap &copy);
		  FragTrap &operator=(const FragTrap &copy);
      ~FragTrap();

      void highFivesGuys(void);

};

#endif
