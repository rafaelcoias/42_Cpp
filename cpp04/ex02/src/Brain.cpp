#include "Brain.hpp"

// CONSTRUCTORS

Brain::Brain() {
  std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(const Brain &copy) {
  std::cout << "Copy Brain constructor called" << std::endl;
  *this = copy;
}
Brain    &Brain::operator=(const Brain &copy) {
  std::cout << "Copy assigment operator Brain called" << std::endl;
  for (size_t i = 0; i != 100; i++)
		this->ideas[i] = copy.ideas[i];
	return (*this);
}
Brain::~Brain() {
  std::cout << "Brain destructer called" << std::endl;
}

// SET & GET FUNCTIONS

// FUNCTIONS

