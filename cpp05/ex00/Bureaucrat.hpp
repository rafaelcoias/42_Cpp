#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>

typedef std::string	str;

class Bureaucrat {
  private:
      const str     name;
      int           grade;

  public:
      Bureaucrat();
      Bureaucrat(str name, int grade);
      ~Bureaucrat();

      str  getName(void);
      int  getGrade(void);
      void  setGrade(int grade);
      void  increaseGrade(void);
      void  decreaseGrade(void);

      void GradeTooHighException(void);
      void GradeTooLowException(void);
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &f);


#endif
