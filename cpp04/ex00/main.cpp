#include "Dog.hpp"
#include "Cat.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  const Animal  *meta = new Animal();
  const Animal  *j = new Dog();
  const Animal  *i = new Cat();

  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;

  j->makeSound();
  i->makeSound();
  meta->makeSound();
}
