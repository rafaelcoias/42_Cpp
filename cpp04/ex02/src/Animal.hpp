#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class Animal {
  protected:
      str   type;

  public:
      Animal();
      Animal(str type);
      Animal(const Animal &copy);
      Animal &operator=(const Animal &copy);
      virtual ~Animal();

      str  getType(void) const;
      void  setType(str type);

      virtual void  makeSound(void) const = 0;
};

#endif
