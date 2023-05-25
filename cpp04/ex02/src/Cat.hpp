#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

typedef std::string	str;

class Cat : public Animal {
  private:
    Brain   *brain;
  public:
      Cat();
      Cat(const Cat &copy);
		  Cat &operator=(const Cat &copy);
      virtual ~Cat();

      virtual void  makeSound(void) const;
};

#endif
