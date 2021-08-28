#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
public:
    Dog();
    Dog(const Dog &);
    Dog &operator= (const Dog &);
    void    makeSound(void) const;
    ~Dog();
};

#endif