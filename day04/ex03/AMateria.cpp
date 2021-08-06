#include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Constructor Default the AMateria is Called!" << std::endl;
}

AMateria::AMateria(std::string const & type)
{
    this->_type = type;
}

std::string const &AMateria::getType() const
{
    return (this->_type);
}

AMateria::AMateria(const AMateria &copy_amateria)
{
    *this = copy_amateria;
}

AMateria &AMateria::operator=(const AMateria &new_amateria)
{
    if (this != &new_amateria)
        this->_type = new_amateria._type;
    return (*this);
}

void    AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << std::endl;
}

AMateria::~AMateria()
{
}