#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

typedef std::string	str;

class Cat : public Animal {
  private:

  public:
      Cat();
      ~Cat();

      void  makeSound(void);
};

#endif
