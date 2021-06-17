#include <iostream>

std::string get_str(std::string &str)
{
    return (str);
}

int main()
{
    std::string *str;
    *str = "HI THIS IS BRAIN";
    std::cout << get_str(*str) << std::endl;
    return (0);
}