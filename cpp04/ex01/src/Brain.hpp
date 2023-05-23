#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class Brain {
  private:
      str   ideas[100];

  public:
      Brain();
      Brain(const Brain &copy);
      Brain &operator=(const Brain &copy);
      ~Brain();
};

#endif
