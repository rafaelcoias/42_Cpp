#include "ScavTrap.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  // Create ClapTrap's

  ClapTrap a = ClapTrap("Rafael");
  ScavTrap b = ScavTrap("Rodrigo");
  ScavTrap c = ScavTrap("Raquel");
  ScavTrap d;

  // First tests

  c.attack(b.getName());
  b.beRepaired(1);
  b.attack(c.getName());
  c.beRepaired(1);

  // Guard Gate

  c.guardGate();

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
