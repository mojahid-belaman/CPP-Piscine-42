#include "Human.hpp"

Brain   Human::getBrain()
{
    return(this->b);
}

std::string   Human::identify()
{
    return (getBrain().identify());
}