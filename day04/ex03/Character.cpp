#include "Character.hpp"

Character::Character()
{
    std::cout << "Constructor Default the Character is Called!" << std::endl;
}

Character::Character(std::string name)
{
    this->_name = name;
    this->index_of_materia = 0;
    for (size_t i = 0; i < 4; i++)
    {
        arr_materia[i] = nullptr;
    }
    
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
    if (this != &new_char)
    {
        this->_name = new_char._name;
        this->index_of_materia = new_char.index_of_materia;
        for (size_t i = 0; i < 4; i++)
        {
            this->arr_materia[i] = nullptr;
            this->arr_materia[i] = new_char.arr_materia[i];
        }
        
    }
    return (*this);
}

void Character::equip(AMateria* m)
{
    if (this->index_of_materia < 4)
    {
        this->arr_materia[this->index_of_materia] = m;
        index_of_materia++;
    }
}

void    Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
    {
        this->arr_materia[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < this->index_of_materia)
        this->arr_materia[idx]->use(target);
}

Character::~Character()
{
    std::cout << "Destroy Object Character!" << std::endl;
}