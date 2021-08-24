#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "Constructor Default the PresidentialPardonForm is Called!\n";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
:Form("Presidential Pardon", 25, 5)
{
    std::cout << "Constructor Parametrise the PresidentialPardonForm is Called!\n";
    this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &p)
:Form("Presidential Pardon", 25, 5)
{
    *this = p;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &p)
{
    if (this != &p)
        this->_target = p._target;
    return (*this);
}

std::string PresidentialPardonForm::get_target() const
{
    return this->_target;
}

void    PresidentialPardonForm::Action() const
{
    std::cout << this->_target + " has been pardoned by Zafod Beeblebrox." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}