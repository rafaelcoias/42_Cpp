#include "Zombie.hpp"

int main(void) {
    int N;

    std::cout << "Write a number : ";
    std::cin >> N;

    if (N < 0)
        return (0);

    Zombie *horde = zombieHorde(N, "zOmBie");
    
    for (int i = 0; i != N; i++)
        horde[i].announce();

    delete[] horde;
    return (0);
}