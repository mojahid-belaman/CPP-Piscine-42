#include "Ice.hpp"

Ice::Ice()
{
    std::cout << "Constructor Default the Ice is Called!" << std::endl;
}

AMateria* Ice::clone() const
{
    AMateria *m = new Ice();
    return m;
}

void    Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " + target.getName() + " *" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Destroy Object Ice!" << std::endl;
}