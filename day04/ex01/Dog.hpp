#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
    Brain *b;
public:
    Dog();
    Dog(const Dog &);
    Dog operator= (const Dog &);
    void    makeSound(void) const;
    ~Dog();
};

#endif