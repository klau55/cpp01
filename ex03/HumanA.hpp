#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {
public:
    HumanA(std::string name, Weapon &weapon);
    void attack();
    ~HumanA();
private:
    std::string name;
    Weapon &weapon;
};

#endif