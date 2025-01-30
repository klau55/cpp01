#include "Zombie.hpp"

int main (void) {
    Zombie first("first");
    Zombie *second = newZombie("second");
    first.announce();
    second->announce();
    randomChump("third");
    int n = 5;
    Zombie *horde = zombieHorde(n, "horde");
    for (int i = 0; i < n; i++) {
        horde[i].announce();
    }
    delete second;
    delete[] horde;

    return 0;
}