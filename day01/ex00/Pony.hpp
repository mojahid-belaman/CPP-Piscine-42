#ifndef PONY_H
#define PONY_H

#include <iostream>

class Pony
{
private:
    std::string name;
    std::string last_name;
    std::string nickname;
public:
    void    ponyOnTheStack();
    void    ponyOnTheHeap();
    Pony(std::string name_, std::string last_name_, std::string nickname_);
    ~Pony();
};

#endif