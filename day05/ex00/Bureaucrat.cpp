#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Nothing"), _grade(0)
{
    std::cout << "Constructor Bureaucrat Called!" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return "\e[1;32m" + this->_name + "\e[0m";
}

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "\e[1;31mthe Bureaucrat grade gets too high\e[0m";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "\e[1;31mthe Bureaucrat grade gets too low\e[0m";
}

Bureaucrat::Bureaucrat(std::string const &name, int grade) : _name(name)
{
    std::cout << "Constructor Parametrise is Called!" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    else if (grade > 150)
        throw GradeTooLowException();
    else
        this->_grade = grade;
}

void    Bureaucrat::increment()
{
    this->_grade--;
    if (this->_grade < 1)
        throw GradeTooHighException();
}

void    Bureaucrat::decrement()
{
    this->_grade++;
    if (_grade > 150)
        throw GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
    return ;
}

std::ostream &operator<<(std::ostream &os, Bureaucrat &b)
{
    os << "Bureaucrat name " + b.getName() + ",  bureaucrat grade " + "\e[1;32m" << b.getGrade() << "\e[0m." << std::endl;
    return os;

}
