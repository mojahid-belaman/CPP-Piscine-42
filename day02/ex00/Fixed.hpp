#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed
{
private:
    int _fixPointValue;
    static const int _nbFractBit = 8;
public:
    Fixed();
    Fixed(const Fixed &);
    ~Fixed();
    Fixed   &operator=(const Fixed &);
    void setRawBits( int const raw );
    int getRawBits( void ) const;
};

#endif