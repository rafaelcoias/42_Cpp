#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class Brain {
  private:
      str   *ideas;

  public:
      Brain();
      Brain(str *ideas);
      ~Brain();

      str  *getIdeas(void);
      void  setIdeas(str *ideas);
};

#endif
