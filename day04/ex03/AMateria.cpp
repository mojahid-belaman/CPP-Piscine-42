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

AMateria::~AMateria()
{
    std::cout << "Destroy Object AMateria!" << std::endl;
}