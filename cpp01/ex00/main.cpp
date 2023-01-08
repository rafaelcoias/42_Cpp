#include "Zombie.hpp"

int main(void)
{
    Zombie z1 = Zombie("joe");
    z1.announce();
    Zombie *z2 = newZombie("josh"); 
    (*z2).announce();
    randomChump("albert");
    delete(z2);
}