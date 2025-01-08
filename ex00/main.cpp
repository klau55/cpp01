#include "Zombie.hpp"

int main (void) {
    Zombie first("first");
    Zombie *second = newZombie("second");
    first.announce();
    second->announce();
    randomChump("third");
    return 0;
}
