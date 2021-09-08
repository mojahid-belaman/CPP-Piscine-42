#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <iostream>

struct Data
{
    std::string str1;
    int nb;
    std::string str2;
};

uintptr_t   serialize(Data* ptr);
Data*   deserialize(uintptr_t raw);

#endif