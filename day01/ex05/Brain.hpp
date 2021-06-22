#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <sstream>

class Brain
{
private:
    std::string _humbr;
public:
    void        set_brain(std::string);
    std::string get_brain();
    std::string identify() const;
};

#endif