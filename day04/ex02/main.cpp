#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *d = new Dog();
    Animal *c = new Cat();
    d->makeSound();
    c->makeSound();
    delete d;
    delete c;
    return (0);
}