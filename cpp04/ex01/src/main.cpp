#include "Dog.hpp"
#include "Cat.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  const Animal* j = new Dog();
  const Animal* i = new Cat();
  delete j;//should not create a leak
  delete i;

  std::cout << "\n== TESTES ==\n";
  Dog d;
  {
    Dog tmp = d;
  }
  return 0;
}
