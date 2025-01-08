#include <string>
#include <iostream>

class Zombie {
    public:
        Zombie(std::string name);
        Zombie();
        void announce(void);
        void setName(std::string name);
    private:
        std::string name;
};
Zombie* newZombie( std::string name );
void randomChump(std::string name);
Zombie *zombieHorde(int N, std::string name);
