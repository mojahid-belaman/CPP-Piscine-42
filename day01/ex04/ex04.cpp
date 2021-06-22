#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;
    std::cout << "Display Using Pointer : " << str_ptr << std::endl;
    std::cout << "Display Using Reference : " << str_ref << std::endl;
    return (0);
}