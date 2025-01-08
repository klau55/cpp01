#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {
public:
    Harl();
    void complain(std::string level);
    ~Harl();
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

    typedef void (Harl::*HarlMemFn)(void);
    struct LevelMap {
        std::string level;
        HarlMemFn function;
    };
    static const LevelMap levelMap[];
};

#endif