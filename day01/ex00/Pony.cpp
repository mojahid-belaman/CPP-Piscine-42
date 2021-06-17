#include "Pony.hpp"

Pony::Pony(std::string name, std::string color)
{
    this->_name = name;
    this->_color = color;
}

Pony::~Pony()
{
    std::cout << "finish object!!" << std::endl;
}