#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    int nb = 2;
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
    for (int i = 0; i < nb; i++)
    {
        delete a[i];
    }

    std::cout << "========\tTest Deep Copy The Class Cat\t========" << std::endl;
    Cat c1;
    Cat c2 = c1;
    c1.print_add_brain(c1);
    c2.print_add_brain(c2);
    std::cout << "========\tFin Test \t\t\t========" << std::endl;
    std::cout << "========\tTest Deep Copy The Class Dog\t========" << std::endl;
    Dog d1;
    Dog d2 = d1;
    d1.print_add_brain(d1);
    d2.print_add_brain(d2);
    std::cout << "========\tFin Test \t\t\t========" << std::endl;

    delete j;
    delete i;
}