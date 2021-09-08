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
    T &operator[](unsigned int);
    size_t size();
    ~Array();

    class outOflimit : public std::exception
    {
        public:
            const char *what() const throw()
            {
                return "this element is out of the limits!";
            }
    };
};

#endif