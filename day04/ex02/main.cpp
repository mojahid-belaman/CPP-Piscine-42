#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *a = new Dog();
    Animal *b = new Cat();
    a->makeSound();
    b->makeSound();
    return (0);
}