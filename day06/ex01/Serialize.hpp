#ifndef SERIALIZE_H
#define SERIALIZE_H

#include <iostream>

struct Data
{
    int nb;
};

uintptr_t serialize(Data* ptr);

#endif