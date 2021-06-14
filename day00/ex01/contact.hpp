#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <iomanip>
#include <string>

class contact
{
    public:
        void    add();
        void    print();
        void    search(contact cont[], int i);
    private:
      std::string first_name;
      std::string last_name;
      std::string nickname;
      std::string login;
      std::string postal_address;
      std::string email_address;
      std::string phone_number;
      std::string birthday_date;
      std::string favorite_meal;
      std::string underwear_color;
      std::string darkest_secret;

};

bool    isnumber(std::string str);
#endif