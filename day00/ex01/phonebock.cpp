#include "contact.hpp"

bool    isnumber(std::string str)
{
    for (int i = 0; i < (int)str.length(); i++)
        if (isdigit(str[i]) == false)
            return false;
    return true;
}

void    display()
{
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";
    std::cout << "\033[1;33m*****\tMy Awesome PhoneBook\t*****\033[0m\n";
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";
    std::cout << "\t\t\033[1;33m1.ADD\033[0m\n";
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";
    std::cout << "\t\t\033[1;33m2.SEARCH\033[0m\n";
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";
    std::cout << "\t\t\033[1;33m3.EXIT\033[0m\n";
    std::cout << "\033[1;33m-------------------------------------\033[0m\n";

}

int main()
{
    std::string str;
    int i;

    i = 0;
    contact cont[8];
    contact c1;
    contact c2;
    while (1)
    {
        display();
        std::cout << "---------------------------------" << std::endl;
        std::cout << "Enter command of operator: ";
        std::cin >> str;
        std::cout << "---------------------------------" << std::endl;
        if (str == "ADD" || str == "add" || str == "Add")
        {
            if (i < 8)
                cont[i++].add();
            else 
                std::cout << "Contact is full!!" << std::endl;
        }
        else if (str == "SEARCH" || str == "search" || str == "Search")
                cont[i].search(cont, i);
        else if (str == "EXIT" || str == "exit" || str == "Exit")
            break ;
    }
    return (0);
}