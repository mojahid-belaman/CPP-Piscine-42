#include "Serialize.hpp"

int main()
{
    Data d;
    d.nb = 1337;
    std::cout << serialize(&d) << std::endl;
}