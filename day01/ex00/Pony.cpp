#include "Pony.hpp"

Pony::Pony(std::string name_, std::string last_name_, std::string nickname_)
{
    this->name = name_;
    this->last_name = last_name_;
    this->nickname = nickname_;
}

Pony::~Pony()
{
    std::cout << "finish object!!" << std::endl;
}