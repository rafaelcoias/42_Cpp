#ifndef DOG_HPP
# define DOG_HPP

# include <string>
# include <iostream>

# include "Animal.hpp"

typedef std::string	str;

class Dog : public Animal {
  private:

  public:
      Dog();
      ~Dog();

      void  makeSound(void);
};

#endif
