#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    std::cout << "Display the address in memory of the string : " << &str << std::endl;
    std::cout << "Display the address in memory of the string Using Pointer : " << stringPTR << std::endl;
    std::cout << "Display the address in memory of the string Using Reference : " << &stringREF << std::endl;
    std::cout << "Display the string using the pointer : " << *stringPTR << std::endl;
    std::cout << "Display the string using the reference : " << stringREF << std::endl;
    return (0);
}