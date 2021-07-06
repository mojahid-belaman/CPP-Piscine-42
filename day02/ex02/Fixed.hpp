#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <tgmath.h>

class Fixed
{
private:
    int _fixPointValue;
    static const int _nbFractBit = 8;
public:
    Fixed();
    Fixed(const int);
    Fixed(const float);
    Fixed(const Fixed &);
    ~Fixed();
    Fixed   &operator=(const Fixed &);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
    float toFloat( void ) const;
    int toInt( void ) const;
    Fixed operator+(const Fixed &);
    Fixed operator-(const Fixed &);
    Fixed operator*(const Fixed &);
    Fixed operator/(const Fixed &);
    Fixed operator++(int);
    Fixed operator++();
    Fixed operator--(int);
    Fixed operator--();
    bool  operator>(const Fixed &);  
    bool  operator<(const Fixed &);  
    bool  operator>=(const Fixed &);  
    bool  operator<=(const Fixed &);  
    bool  operator==(const Fixed &);  
    bool  operator!=(const Fixed &);
    static Fixed &min(Fixed &, Fixed &);
    static Fixed const &min(const Fixed &, const Fixed &);
    static Fixed &max(Fixed &, Fixed &);
    static Fixed const &max(Fixed const &, Fixed const &);
};

std::ostream& operator<<(std::ostream &, Fixed const &);
#endif