#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
private:
    std::string _name;
    std::string _color;
public:
    Pony(std::string, std::string);
    ~Pony();
};

#endif