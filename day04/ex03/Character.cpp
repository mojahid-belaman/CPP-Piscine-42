#include "Character.hpp"

Character::Character()
{
    std::cout << "Constructor Default the Character is Called!" << std::endl;
}

Character::Character(std::string name)
{
    this->_name = name;
}
std::string const & Character::getName() const
{
    return (this->_name);
}

Character::Character(const Character &new_char)
{
    *this = new_char;
}

Character &Character::operator= (const Character &new_char)
{
    this->_name = new_char._name;
    return (*this);
}

void Character::equip(AMateria* m)
{
    
}

Character::~Character()
{
    std::cout << "Destroy Object Character!" << std::endl;
}