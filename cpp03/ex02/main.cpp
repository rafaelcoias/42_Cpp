#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  // Create ClapTrap's

  ClapTrap a = ClapTrap("Rafael");
  ScavTrap b = ScavTrap("Rodrigo");
  ScavTrap c = ScavTrap("Raquel");
  FragTrap d = FragTrap("Ricardo");
  FragTrap e;

  // First tests

  d.attack(b.getName());
  b.beRepaired(1);
  d.attack(c.getName());
  c.beRepaired(1);

  // Guard Gate

  c.guardGate();

  // Guard Gate

  d.highFivesGuys();

  // Lose all Energy

  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(b.getName());
  a.attack(d.getName());
  a.attack(d.getName());
  a.attack(d.getName());
  a.attack(d.getName());
  a.attack(d.getName());
  a.attack(d.getName());

  b.beRepaired(1);
  d.attack(a.getName());
}
