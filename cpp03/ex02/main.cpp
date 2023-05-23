#include "FragTrap.hpp"

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  // Create ClapTrap's

	FragTrap a("Ricardo");
	FragTrap b (a);
	FragTrap c;
	FragTrap d("Rafael");

  c = d;

  // First tests

  c.attack(b.getName());
  b.beRepaired(2);
  b.attack(c.getName());
  c.beRepaired(2);

  // Check status

  std::cout << a.getName() << " has " << a.getHp() << " hp and " << a.getEnergy() << " of energy left." << std::endl;
  std::cout << c.getName() << " has " << c.getHp() << " hp and " << c.getEnergy() << " of energy left." << std::endl;
  std::cout << b.getName() << " has " << b.getHp() << " hp and " << b.getEnergy() << " of energy left." << std::endl;
  b.beRepaired(100);

  for (int i = 0; i <= c.getEnergy() / 2; i++)
		c.beRepaired(10);

  std::cout << c.getName() << " has " << c.getHp() << " hp and " << c.getEnergy() << " of energy left." << std::endl;

  // Lose all Energy and Attack a lot

	while (b.getHp() > 0)
	{
		c.attack(b.getName());
		b.takeDamage(c.getDamage());
		c.attack(b.getName());
		if (b.getHp() > 0)
			c.takeDamage(b.getDamage());
	}

  // Check status

  std::cout << b.getName() << " has " << b.getHp() << " hp and " << b.getEnergy() << " of energy left." << std::endl;
  std::cout << a.getName() << " has " << a.getHp() << " hp and " << a.getEnergy() << " of energy left." << std::endl;


  // High Five guys

  a.highFivesGuys();

  b.beRepaired(3);
  b.attack(a.getName());
}
