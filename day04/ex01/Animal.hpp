#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal();
    Animal(const Animal &);
    Animal &operator=(const Animal &);
    std::string getType() const;
    void    makeSound(void) const;
    ~Animal();
};

#endif