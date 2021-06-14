#include "contact.hpp"

void    contact::add()
{
    std::string str;
    
    std::cout << "Enter your first name: ";
    std::cin.ignore();
    std::getline (std::cin,first_name);
    std::cout << "Enter your last name: ";
    std::getline (std::cin,last_name);
    std::cout << "Enter your nickname: ";
    std::getline (std::cin,nickname);
    std::cout << "Enter your login: ";
    std::getline (std::cin,login);
    std::cout << "Enter your postal address: ";
    std::getline (std::cin,postal_address);
    std::cout << "Enter your email address: ";
    std::getline (std::cin,email_address);
    std::cout << "Enter your phone number: ";
    std::getline (std::cin,phone_number);
    std::cout << "Enter your birthday date: ";
    std::getline (std::cin,birthday_date);
    std::cout << "Enter your favorite meal: ";
    std::getline (std::cin,favorite_meal);
    std::cout << "Enter your underwear color: ";
    std::getline (std::cin,underwear_color);
    std::cout << "Enter your darkest secret: ";
    std::getline (std::cin,darkest_secret);
    std::cout << "\033[1;32m-------------------------------------\033[0m\n";
    std::cout << "\033[1;32m\tAdd Contact Success!\033[0m\n";
    std::cout << "\033[1;32m-------------------------------------\033[0m\n";
}

void    contact::search(contact cont[], int i)
{
    int index;
    std::string str;
    int nb;

    index = 0;
    std::cout << "\033[1;32m---------------------------------------------\033[0m" << std::endl;
    std::cout << "\033[1;32m|     index|first name| last name|  nickname|\033[0m" << std::endl;
    std::cout << "\033[1;32m---------------------------------------------\033[0m" << std::endl;
    while (index < i)
    {
        std::cout << "|" << std::setw(10) << index << "|";
        if (cont[index].first_name.length() > 10)
            std::cout << std::setw(10) << cont[index].first_name.substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << cont[index].first_name.substr(0, 10) << "|";
        if (cont[index].last_name.length() > 10)
            std::cout << std::setw(10) << cont[index].last_name.substr(0, 9) + "." << "|";
        else
            std::cout << std::setw(10) << cont[index].last_name.substr(0, 10) << "|";
        if (cont[index].nickname.length() > 10)
            std::cout << std::setw(10) << cont[index].nickname.substr(0, 9) + "." + "|" << std::endl;
        else
            std::cout << std::setw(10) << cont[index].nickname.substr(0, 10) << "|" << std::endl;
        index++;
    }
    std::cout << "-------------------------" << std::endl;
    std::cout << "Enter index of contact: ";
    std::cin.ignore();
    std::getline(std::cin, str);
    nb = atoi(str.c_str());
    if (isnumber(str) && nb < index && nb >= 0)
    {
        std::cout << "-------------------------" << std::endl;
        std::cout << cont[nb].first_name << std::endl;
        std::cout << cont[nb].last_name << std::endl;
        std::cout << cont[nb].nickname << std::endl;
        std::cout << cont[nb].login << std::endl;
        std::cout << cont[nb].postal_address << std::endl;
        std::cout << cont[nb].email_address << std::endl;
        std::cout << cont[nb].phone_number << std::endl;
        std::cout << cont[nb].birthday_date << std::endl;
        std::cout << cont[nb].favorite_meal << std::endl;
        std::cout << cont[nb].underwear_color << std::endl;
        std::cout << cont[nb].darkest_secret << std::endl;
        std::cout << "-------------------------" << std::endl;
    }
    else
    {
        std::cout << "\033[1;31m-----------------\033[0m" << std::endl;
        std::cout << "\033[1;31mindex not found!!\033[0m" << std::endl;
        std::cout << "\033[1;31m-----------------\033[0m" << std::endl;
    }

}






