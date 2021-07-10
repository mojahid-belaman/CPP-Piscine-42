#include "Fixed.hpp"

Fixed::Fixed(): _fixPointValue(0)
{
}

Fixed::Fixed(const int nb_i)
{
    this->_fixPointValue = nb_i * (1 << _nbFractBit);
}

Fixed::Fixed(const float nb_f)
{
    this->_fixPointValue = roundf(nb_f * (1 << this->_nbFractBit));
}

Fixed Fixed::operator++()
{
    _fixPointValue++;
    return (*this);
}    

Fixed Fixed::operator++(int)
{
    Fixed f;
    f = *this;
    this->_fixPointValue++;
    return (f);
}

Fixed Fixed::operator--(int)
{
    _fixPointValue--;
    return (*this);
}    

Fixed Fixed::operator--()
{
    Fixed f;
    f = *this;
    this->_fixPointValue--;
    return (f);
}

bool  Fixed::operator>(const Fixed & f)
{
    return (_fixPointValue > f._fixPointValue);
}

bool  Fixed::operator<(const Fixed & f)
{
    return (_fixPointValue < f._fixPointValue);
}

bool  Fixed::operator>=(const Fixed & f)
{
    return (_fixPointValue >= f._fixPointValue);
}

bool  Fixed::operator<=(const Fixed & f)
{
    return (this->_fixPointValue <= f._fixPointValue);
}

bool  Fixed::operator==(const Fixed & f)
{
    return (_fixPointValue == f._fixPointValue);
}

bool  Fixed::operator!=(const Fixed & f)
{
    return (_fixPointValue != f._fixPointValue);
}

int Fixed::toInt(void) const
{
    return ((int)_fixPointValue / (int)(1 << _nbFractBit));
}

float Fixed::toFloat( void ) const
{
    return ((float)_fixPointValue / (float)(1 << _nbFractBit));
}

Fixed& Fixed::operator= (const Fixed &f)
{
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
    this->_fixPointValue = fxd._nbFractBit;
    *this = fxd;
}

int Fixed::getRawBits( void ) const
{
    return (this->_fixPointValue);
}

void    Fixed::setRawBits(int const raw)
{
    this->_fixPointValue = raw;
}

Fixed Fixed::operator+(const Fixed &f1)
{
    Fixed f_rsl;
    f_rsl._fixPointValue = this->_fixPointValue + f1._fixPointValue;
    return f_rsl;
}

Fixed Fixed::operator-(const Fixed &f1)
{
    Fixed f_rsl;
    f_rsl._fixPointValue = this->_fixPointValue - f1._fixPointValue;
    return f_rsl;
}

Fixed Fixed::operator*(const Fixed &f1)
{
    Fixed f_rsl;
    f_rsl._fixPointValue = this->_fixPointValue * f1._fixPointValue;
    f_rsl._fixPointValue = f_rsl.toFloat();
    return f_rsl;
}

Fixed Fixed::operator/(const Fixed &f1)
{
    Fixed f_rsl;
    f_rsl._fixPointValue = this->_fixPointValue / f1.toFloat();
    return f_rsl;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    if (f1 <= f2)
        return f1;
    else
        return f2;
    
}

Fixed const &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 <= (Fixed)f2)
        return f1;
    else
        return f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    if (f1 >= f2)
        return f1;
    else
        return f2;
}

Fixed const &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    if ((Fixed)f1 >= (Fixed)f2)
        return f1;
    else
        return f2;
}

Fixed::~Fixed()
{
}