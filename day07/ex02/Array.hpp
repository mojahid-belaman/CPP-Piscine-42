#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _n;
public:
    Array();
    Array<T>(unsigned int);
    Array<T>(Array const &);
    Array<T> &operator=(Array const &);
    T &operator new[](std::size_t);
    ~Array();
};

#endif