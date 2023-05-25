#include "Dog.hpp"
#include "Cat.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  const Animal* j = new Dog();
  const Animal* i = new Cat();
  j->makeSound();
  i->makeSound();
  delete j;//should not create a leak
  delete i;

  std::cout << "\n== OTHER TESTS ==\n";
  Dog d;
  Dog tmp = d;
  // Animal test;
  // Animal *test2 = new Animal();
  // delete(test2);
  return 0;
  
}
