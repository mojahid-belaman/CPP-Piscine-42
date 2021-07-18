#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int nb = 4;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    Animal *a[nb];
    for (int i = 0; i < nb; i++)
    {
        if ((i + 1) <= nb / 2 )
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }

    delete j;//should not create a leak
    delete i;
}