#include "Human.hpp"

const   Brain&   Human::getBrain()
{
    return(this->_b);
}

std::string   Human::identify()
{
    return (getBrain().identify());
}
