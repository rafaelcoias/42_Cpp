#include "Bureaucrat.hpp"

// CONSTRUCTORS

Bureaucrat::Bureaucrat() {}

Bureaucrat::Bureaucrat(const str name, int grade) {
  if (grade < 1) {
    GradeTooHighException();
    return ;
  }
  if (grade > 150) {
    GradeTooLowException();
    return ;
  }
  this->name = name;
  this->grade = grade;
}

Bureaucrat::~Bureaucrat() {}

// SET & GET FUNCTIONS

str Bureaucrat::getName(void) {
  return (this->name);
}

int Bureaucrat::getGrade(void) {
  return (this->grade);
}

void Bureaucrat::setGrade(int grade) {
  this->grade = grade;
}

// FUNCTIONS

void Bureaucrat::increaseGrade(void) {
  if (getGrade() > 1)
    this->grade--;
}

void Bureaucrat::decreaseGrade(void) {
  if (getGrade() < 150)
    this->grade++;
}

void Bureaucrat::GradeTooHighException(void) {
  std::cout << "Grade Too High Exception (1 is the highest)" << std::endl;
}

void Bureaucrat::GradeTooLowException(void) {
  std::cout << "Grade Too Low Exception (150 is the lowest)" << std::endl;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b){
	o << b.getName() << ", " << "bureaucrat grade " << b.getGrade();
	return (o);
}
