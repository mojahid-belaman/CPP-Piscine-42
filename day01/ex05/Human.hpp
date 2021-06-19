#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"
class Human
{
private:
    const Brain b;
public:
    std::string identify();
    Brain    getBrain();
};

#endif
