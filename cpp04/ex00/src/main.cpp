#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

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

  delete(meta);
  delete(j);
  delete(i);

  std::cout << "\n ==================================== " << std::endl;

  const WrongAnimal* meta2 = new WrongAnimal();
  const WrongAnimal* i2 = new WrongCat();
  std::cout << i2->getType() << " " << std::endl;
  i2->makeSound(); //will output the cat sound!
  meta2->makeSound();
  delete(meta2);
  delete(i2);
  return 0;
}
