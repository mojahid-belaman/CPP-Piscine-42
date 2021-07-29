#include "Cure.hpp"

Cure::Cure()
{
    std::cout << "Constructor Default the Cure is Called!" << std::endl;
}

AMateria* Cure::clone() const
{
    AMateria *m = new Cure();
    return m;
}

void    Cure::use(ICharacter& target)
{
    std::cout << "* heals " + target.getName() + " wounds *" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Destroy Object Cure!" << std::endl;
}