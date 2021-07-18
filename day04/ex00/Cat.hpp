#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
private:
    /* data */
public:
    Cat();
    Cat(const Cat &);
    Cat operator= (const Cat &);
    void    makeSound(void) const;
    ~Cat();
};


#endif