#include "karen.hpp"

void karen::debug( void )
{
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}
void karen::error( void )
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void karen::complain(std::string level)
{

    ptr tab[] = {&karen::debug, &karen::info, &karen::warning, &karen::error};
    std::cout << tab[0] << std::endl;
}

karen::karen(/* args */)
{
}

karen::~karen()
{
}