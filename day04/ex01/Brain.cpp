#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Constructor Default the Brain is Called!" << std::endl;
}

Brain::Brain(const Brain &new_brain)
{
    std::cout << "Constructor Copy the Brain is Called!" << std::endl;
    *this = new_brain;
}

Brain &Brain::operator= (const Brain &new_brain)
{
    std::cout << "Assignement operator is Called!" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = new_brain.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "destructor the Brain is Called!" << std::endl;
}