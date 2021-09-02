#ifndef CASTS_H
#define CASTS_H

#include <iostream>

class Casts
{
private:
    std::string _str;
public:
    Casts();
    Casts(std::string);
    void    Convert_char();
    void    Convert_int();
    void    Convert_float();
    void    Convert_double();
    bool    is_scientific();
    ~Casts();
};

#endif