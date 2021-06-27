#include <iostream>
#include <fstream>
#include <string.h>
#include <errno.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string s1, s2, line, file_name;
        std::ifstream file_in;
        std::ofstream file_out;
        size_t pos;

        s1 = av[2];
        s2 = av[3];
        file_name = av[1];
        if (s1.empty() || s2.empty())
        {
            std::cout << "Error: Invalid arguments!" << std::endl;
            return (1);
        }
        file_in.open(file_name, std::ios::in);
        if (!file_in)
        {
            std::cout << "Error: Couldn't open the input file!" << std::endl;
            return (1);
        }
        std::transform(file_name.begin(), file_name.end(),file_name.begin(), ::toupper);
        file_out.open(file_name + ".replace", std::ios::out);
        if (!file_in)
        {
            std::cout << "Error: Couldn't open the output file!" << std::endl;
            return (1);
        }
        while (getline(file_in, line))
        {
            pos = 0;
            while ((pos = line.find(s1, pos)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
            }
            file_out << line;
            if (!file_in.eof())
                file_out << std::endl;
        }
        file_in.close();
        file_out.close();
    }
    else
        std::cout << "Error: Wrong number of arguments!" << std::endl;
    return (0);
}