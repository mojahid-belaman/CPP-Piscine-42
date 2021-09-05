#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <cstdlib>

class Base
{
private:
    
public:
    Base();
    virtual ~Base();
}; 

Base    *generate(void);
void    identify(Base* p);

#endif