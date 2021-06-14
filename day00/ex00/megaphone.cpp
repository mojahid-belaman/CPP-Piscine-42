#include <iostream>

void    ft_upper(char **argv)
{
    int i;
    int j;
    int len;

    i = 0;
    while (argv[++i])
    {
        len = std::strlen(argv[i]);
        j = -1;
        while (++j < len)
            putchar(std::toupper(argv[i][j]));
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    if (argc > 1)
        ft_upper(argv);
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
    return (0);
}