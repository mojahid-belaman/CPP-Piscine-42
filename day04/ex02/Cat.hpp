#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
    Brain *b;
public:
    Cat();
    Cat(const Cat &);
    Cat &operator= (const Cat &);
    void    makeSound(void) const;
    void    print_add_brain(const Cat &);
    ~Cat();
};


#endif