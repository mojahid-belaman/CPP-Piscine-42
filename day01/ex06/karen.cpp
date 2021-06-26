#include "karen.hpp"

void karen::debug( void )
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
    std::cout << "I just love it!" << std::endl;
}

void karen::info( void )
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon cost more money." << std::endl;
    std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void karen::warning( void )
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
    std::cout << "been coming here for years and you just started working here last month." << std::endl;
}
void karen::error( void )
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void karen::complain(std::string level)
{
    int i;
    int nb = -1;
    std::string tab_str[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    ptr tab_add[] = {&karen::debug, &karen::info, &karen::warning, &karen::error};
    for (i = 0; i < 4; i++)
    {
        if (level == tab_str[i])
        {
            nb = i ;
            break ;
        }
    }
    do
    {
        switch (nb)
        {
            case 0:
                (this->*(tab_add[nb]))();
                break;
            case 1:
                (this->*(tab_add[nb]))();
                break;
            case 2:
                (this->*(tab_add[nb]))();
                break;
            case 3:
                (this->*(tab_add[nb]))();
                break;
            default :
                return ;
        }
        nb = nb + 1;
    } while (nb < 4);
    
}