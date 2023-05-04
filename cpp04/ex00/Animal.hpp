#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class Animal {
  private:
      str   type;

  public:
      Animal();
      Animal(str type);
      ~Animal();

      str  getType(void);
      void  setType(str type);

      void  makeSound(void);
};

#endif
