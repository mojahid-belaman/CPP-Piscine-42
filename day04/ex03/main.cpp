#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
    AMateria *m1 = new Ice();
    AMateria *m2 = new Cure();
    m1->getType();
    m2->getType();
    return 0;
}