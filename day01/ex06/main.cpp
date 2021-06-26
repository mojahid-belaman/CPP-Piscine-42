#include "karen.hpp"

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        karen k;
        k.complain(argv[1]);
    }
    return (0);
}