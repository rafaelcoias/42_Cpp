#include "Brain.hpp"

// CONSTRUCTORS

Brain::Brain() {}

Brain::Brain(str *ideas) {
  this->ideas = ideas;
}

Brain::~Brain() {}

// SET & GET FUNCTIONS

str *Brain::getIdeas(void) {
  return (this->ideas);
}

void Brain::setIdeas(str *ideas) {
  this->ideas = ideas;
}


// FUNCTIONS

