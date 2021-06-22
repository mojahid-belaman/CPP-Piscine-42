#ifndef HUMAN_H
#define HUMAN_H

#include "Brain.hpp"
class Human
{
private:
    const Brain _b;
public:
    std::string identify();
    const Brain&    getBrain();
};

#endif
