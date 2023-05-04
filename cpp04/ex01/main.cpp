#include "Dog.hpp"
#include "Cat.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;
  delete i;
  
  return 0;
}
