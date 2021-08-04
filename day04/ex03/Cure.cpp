#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "Constructor Default the Cure is Called!" << std::endl;
}

Cure::Cure(const Cure &copy_cure)
{
    *this = copy_cure;
}

Cure &Cure::operator= (const Cure &new_cure)
{
    if (this != &new_cure)
        this->_type = new_cure._type;
    return *this;
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