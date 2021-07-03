#include "Fixed.hpp"

Fixed::Fixed(): _fixPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb_i)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixPointValue = (float)nb_i * (float)(1 << _nbFractBit);
}

Fixed::Fixed(const float nb_f)
{
    std::cout << "Float constructor called" << std::endl;
    this->_fixPointValue = roundf(nb_f * (1 << this->_nbFractBit));
    std::cout << "fixedPointValue = " << this->_fixPointValue << std::endl;
}

int Fixed::toInt(void) const
{
    return ((int)_fixPointValue / (int)(1 << _nbFractBit));
}

float Fixed::toFloat( void ) const
{
    return ((float)_fixPointValue / (float)(1 << _nbFractBit));
}

Fixed &Fixed::operator= (const Fixed &f)
{
    std::cout << "Assignation operator called" << std::endl;
    this->_fixPointValue = f._fixPointValue;
    return (*this);
}

std::ostream& operator<<(std::ostream & output, Fixed const &f)
{
    output << f.toFloat();
    return (output);
}

Fixed::Fixed(const Fixed &fxd)
{
    std::cout << "Copy constructor called" << std::endl;
    this->_fixPointValue = fxd._nbFractBit;
    *this = fxd;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_fixPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixPointValue = raw;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}