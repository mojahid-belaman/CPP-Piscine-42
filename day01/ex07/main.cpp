#include <iostream>
#include <fstream>
#include <string.h>
#include <errno.h>

int main(int ac, char **av)
{
    std::string s1, s2, line, file_name;
    
    size_t pos;
    if (ac == 4)
    {
        s1 = av[2];
        s2 = av[3];
        file_name = av[1];
        std::ifstream file_in;
        file_in.open(file_name, std::ios::in);
        if (!file_in)
            std::cout << "Error!" << std::endl;
        std::fstream file_out;
        file_out.open(file_name + ".replace", std::ios::out | std::ios::trunc);
        if (!file_in)
            std::cout << "Error!" << std::endl;
        while (getline(file_in, line))
        {
            pos = 0;
            while ((pos = line.find(s1)) != std::string::npos)
            {
                std::cout << "dkhal" << std::endl;
                line.replace(pos, s1.length(), s2);
                pos += s2.length();
            }
            file_out << line << std::endl;
        }
        file_in.close();
        file_out.close();
    }
    else
        std::cout << "Error: Invalid Argument!" << std::endl;
    return (0);
}