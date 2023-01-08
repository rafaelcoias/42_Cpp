#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
    Weapon w1 = Weapon("pistol");
    HumanA h1("Rafael", w1);
    h1.attack();
    w1.setType("ak-47");
    h1.attack();

    Weapon w2 = Weapon("knife");
    HumanB h2("Ricardo");
    h2.setWeapon(w2);
    h2.attack();
    w2.setType("sword");
    h2.attack();
    return (0);
}