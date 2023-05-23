#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

typedef std::string	str;

class Cat : public Animal {
  private:

  public:
      Cat();
      Cat(const Cat &copy);
		  Cat &operator=(const Cat &copy);
      virtual ~Cat();

      virtual void  makeSound(void) const;
};

#endif
