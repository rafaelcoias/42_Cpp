#include "ClapTrap.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  // Create ClapTrap's

  ClapTrap a = ClapTrap("Rafael");
  ClapTrap b = ClapTrap("Rodrigo");
  ClapTrap c = ClapTrap("Raquel");
  ClapTrap d;

  // First tests

  c.attack(b.getName());
  b.beRepaired(1);
  b.attack(c.getName());
  c.beRepaired(1);

  // Lose all Energy

  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());

  b.beRepaired(1);
  b.attack(a.getName());
}
