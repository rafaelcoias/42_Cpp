#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

#include "Brain.hpp"

typedef std::string	str;

class Animal {
  private:
      str   type;
      Brain *brain;

  public:
      Animal();
      Animal(str type);
      ~Animal();

      str  getType(void);
      void  setType(str type);

      void  makeSound(void);
};

#endif
